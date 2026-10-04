//Search an Element Using Function + Recursion
#include<bits/stdc++.h>
using namespace std;

bool searchElement(int arr[][100], int n, int m, int i, int j, int target)
{
    // Base case: all elements checked
    if(i == n)
    {
        return false;
    }

    // Element found
    if(arr[i][j] == target)
    {
        cout << "Element found at row " << i
             << ", column " << j << endl;
        return true;
    }

    // Move to next row
    if(j == m - 1)
    {
        return searchElement(arr, n, m, i + 1, 0, target);
    }

    // Move to next column
    return searchElement(arr, n, m, i, j + 1, target);
}

int main()
{
    int n, m;

    cout << "Enter the row and column: ";
    cin >> n >> m;

    int arr[100][100];

    cout << "Enter the matrix elements: " << endl;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int target;

    cout << "Enter the element to search: ";
    cin >> target;

    bool found = searchElement(arr, n, m, 0, 0, target);

    if(!found)
    {
        cout << "Element not found!" << endl;
    }

    return 0;
}
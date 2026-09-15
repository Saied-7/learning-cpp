//Find the Second Largest Element
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the array size: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of array:" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int largest = arr[0];
    int secondLargest = arr[1];

    if(largest < secondLargest){
        swap(largest, secondLargest);
    }

    for(int i = 2; i < n; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest){
            secondLargest = arr[i];
        }
    }

    cout << "Second Largest = " << secondLargest << endl;

    return 0;
}
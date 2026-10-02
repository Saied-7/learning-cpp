//Find Sum of All Elements Using Recursion
#include<bits/stdc++.h>
using namespace std;

int matrixsum(int arr[][100],int rows,int cols,int i,int j)
{

    //stop when all rows are printe 
    if(i==rows)
    {
        return 0;
    }

    //move to the next row 
    if(j == cols-1)
    {
       return arr[i][j]+matrixsum(arr,rows,cols,i+1,0);
    }
    else
    {
        //move to the next column
        return arr[i][j]+matrixsum(arr,rows,cols,i,j+1);
    }
}

int main()
{
    int n,m;
    cout<<"enter the row and column (n x m): "<<endl;
    cin>>n>>m;
    int arr[100][100];

    //input array element from user
    cout<<"enter the matrix element: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    //function call for sum of all  matrix element
    cout<<"The sum of al element of matrix is: "<< matrixsum(arr,n,m,0,0);


 return 0;
}

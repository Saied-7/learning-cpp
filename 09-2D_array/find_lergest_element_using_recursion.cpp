#include<bits/stdc++.h>
using namespace std;

int findmax(int arr[][100],int row,int col,int i,int j,int max)
{
    if(i == row)
    {
        return max;
    }

    //check max 
    if(arr[i][j]>max)
    {
        max = arr[i][j];
    }

    //move to next row 
    if(j == col-1)
    {
       return findmax(arr,row,col,i+1,0,max);
    }
    //move to next column
    else
    {
        return findmax(arr,row,col,i,j+1,max);
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
    //fuctiom call for finding maximum elelement 
    int max = arr[0][0];
    cout<<"the lergest element of this array is: "<<findmax(arr,n,m,0,0,max);

 return 0;
}

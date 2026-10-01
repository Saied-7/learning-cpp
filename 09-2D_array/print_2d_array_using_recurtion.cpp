//print a (n x m) matrix using recurtion 
#include<bits/stdc++.h>
using namespace std;

void print(int arr[][100],int rows,int cols,int i,int j)
{
    //stop when all rows are printe 
    if(i==rows)
    {
        return;
    }
    cout<< arr[i][j]<<" ";
    //move to the next row 
    if(j == cols-1)
    {
        cout<<endl;
        print(arr,rows,cols,i+1,0);
    }
    else
    {
        //move to the next column
        print(arr,rows,cols,i,j+1);
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
    //function call for printing matrix
    cout<<"matrix: "<<endl;
    print(arr,n,m,0,0);


 return 0;
}

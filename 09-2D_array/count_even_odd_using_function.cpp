//Count Even and Odd Numbers Using Recursion
#include<bits/stdc++.h>
using namespace std;

void count_evenodd(int arr[][100],int n,int m){
    int even = 0,odd = 0;
    for(int i=0;i<n;i++)
    {
        //fin how many even and odd in this array 
        for(int j=0;j<m;j++)
        {
            if((arr[i][j]%2)==0)
            {
                even++;
            }else{
                odd++;
            }
        }
    }
    cout<<"Even: "<<even<<endl<<"Odd: "<<odd;
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
    //function call for count even and odd
    count_evenodd(arr,n,m);
 return 0;
}

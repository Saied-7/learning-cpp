//Find Largest and Smallest Element
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter the row and column"<<endl;
    cin>>n>>m;
    int arr[n][m];
    cout<<"enter the array element : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int larg = arr[0][0],small = arr[0][0];
    int maxrow =0,minrow =0,maxcol =0,mincol =0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]> larg){
                larg = arr[i][j];
                maxrow =i;
                maxcol =j;
            }
            if(arr[i][j]<small){
                small = arr[i][j];
                minrow =i;
                mincol =j;
            }
        }
    }
    cout<<"the largest element is : "<<larg<<" at "<<"row : "<<maxrow+1<<" column "<<maxcol+1<<endl;
    cout<<"the smallest element is : "<<small<<" at "<<"row : "<<minrow+1<<" column "<<mincol+1<<endl;
 return 0;
}

//Row Sum and Column Sum
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3];
    cout<<"enter the array element : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        int sum =0;
        for(int j=0;j<3;j++){
            sum += arr[i][j];
        }
        cout<<"sum of row "<<i+1<<"is : "<<sum<<endl;
    }
    for(int j=0;j<3;j++){
        int sum =0;
        for(int i=0;i<3;i++){
            sum += arr[i][j];
        }
        cout<<"sum of column"<<j+1<<" is : "<<sum<<endl;
    }
 return 0;
}

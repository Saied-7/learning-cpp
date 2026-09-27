//Transpose of a Matrix
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[2][3];
    cout<<"Enter the 2 x 3 array elements :"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    //print the actual matrix
    cout<<"Matrix"<<endl;
    for(int i=0;i<2;i++){
     for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //print the transpose matrix
    cout<<"Transpose"<<endl;
    for(int i=0;i<3;i++){
     for(int j=0;j<2;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
 return 0;
}

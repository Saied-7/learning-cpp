//Diagonal sum
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Diagonal sum of a (3 x 3) square matrix "<<endl;
    int main = 0,second = 0;
    int arr[3][3];
    cout<<"Enter the array elements :"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    //Main diagonal sum
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                main += arr[i][j];
            }
            
        
        }
    }
    //Secondary diagonal sum
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if (j == 3-i-1){
        second += arr[i][j];
        }
        }
    }
    cout<<"the main diagonal sum is :"<<main<<endl;
    cout<<"the secondery diagonal sum is :"<<second<<endl;

 return 0;
}

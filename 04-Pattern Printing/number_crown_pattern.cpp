//Number Crown Pattern
#include<iostream>
using namespace std;
int main (){
    int number;
    cout<<"enter a number :";
    cin>>number;

    for(int i =1;i<=number;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int n=1;n<= 2*(number-i);n++){
            cout<<" ";
        }
        for(int k=i;k>=1;k--){
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}

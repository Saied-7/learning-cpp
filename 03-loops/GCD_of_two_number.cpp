#include<iostream>
using namespace std;
int main (){
    int A,B;
    cout<<"enter the value of A and B :";
    cin>>A>>B;

    if(A<=B){
        for(int i=A;i>=1;i--){
            if(B%i ==0 && A%i == 0){
                cout<<"GCD is :"<<i;
                break;
            } 
        }
    }else{
         for(int i=B;i>=1;i--){
            if(B%i ==0 && A%i == 0){
                cout<<"GCD is :"<<i;
                break;
            }
        }
    }
    return 0;
}

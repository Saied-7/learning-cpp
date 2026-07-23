#include<iostream>
using namespace std ;
int main() {
    int A,B,C;

    cout<<"enter your first number :";
    cin>>A;
    cout<<"enter your second number :";
    cin>>B;
    cout<<"enter your third number :";
    cin>>C;
   
    if(A>B){
        if(A>C){
            cout<<A<<" is greatest";
        }else{
            cout<<C<<" is greatest";
        }
    }
    else{ 
        if(B>C){
            cout<<B<<" is greatest";
        }
        else{
            cout<<C<<" is greatest";  
        }
    }    
    return 0;
}
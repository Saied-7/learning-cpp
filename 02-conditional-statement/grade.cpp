#include<iostream>
using namespace std ;
int main() {
    int A; 
    cout<<"enter your score :";
    cin>>A;
    
    if(A < 0 || A > 100){
        cout<<"invelid number";
    }
    else if(A>=90){
        cout<<"A";
    } 
     else if(A>=80){
        cout<<"B";
    } 
     else if(A>=70){
        cout<<"C";
    } 
     else if(A>=60){
        cout<<"D";
    } 
    else {
        cout<<"F";
    }
   
    return 0;
}
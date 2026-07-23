#include<iostream>
using namespace std ;
int main() {
    int A; 
    cout<<"enter your age :";
    cin>>A;
    
    if(A < 0 ){
        cout<<"invelid age";
    }
    else if(A>=0 && A<=2){
        cout<<"Infant";
    } 
     else if(A>=3 && A<=12){
        cout<<"Child";
    } 
     else if(A>=13 && A<=19){
        cout<<"Teenager";
    } 
     else if(A>=20 && A<=64){
        cout<<"Adult";
    } 
    else {
        cout<<"Senior";
    }
   
    return 0;
}
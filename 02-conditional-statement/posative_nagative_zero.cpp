#include<iostream>
using namespace std ;
int main() {
    int A; 
    cout<<"enter a number :";
    cin>>A;
    
    if(A>0){
        cout<<"posative";
    } else if(A<0){
        cout<<"negative";
    } else {
        cout<<"zero";
    }
   
    return 0;
}
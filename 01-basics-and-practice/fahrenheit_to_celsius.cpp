#include<iostream>
using namespace std ;
int main() {

    double C,F;

    cout<<"please enter the valu of fahrenheit scale : ";
    cin>>F;

    C = (F-32)*(5.0/9.0);
    cout<<"the valu of celsius scle is : "<<C<<endl;
   
    return 0;
    
}
#include<iostream>
using namespace std ;
int main() {
    int A,B,temp;
    cout<<"enter the valu of A : ";
    cin>>A;
    cout<<"enter the valu of B : ";
    cin>>B;

    cout<<"before  swaping "<<endl<< "the value of A is : "<< A <<endl <<
     "the value of B is : "<< B <<endl;
    
    temp = A;
    A = B;
    B = temp;

    cout<<"after swaping " <<endl<< "the value of A is : "<< A << 
    endl << "the value of B is : "<< B << endl ;
    return 0;
    
}
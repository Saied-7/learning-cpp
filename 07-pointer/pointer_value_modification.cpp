//Pointer Value Modification
#include<iostream>
using namespace std;

int main (){
    int x = 10 ;
    cout<<"before updating the value of x is : "<<x;
    int* p = &x;
    *p = 2*(*p);
    cout<<"\nafter updating the value of x is  : "<<x;



    return 0;
}
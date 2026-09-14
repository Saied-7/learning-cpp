//Updating Value via Pointer-to-Pointer (Double Pointer)
#include<iostream>
using namespace std;

int main (){
    int x = 10;
    int* p = &x ;
    int** dp = &p;
    
    **dp = 100;


    cout<<"\nafter updating the value of x is  : "<<x;



    return 0;
}
//Fast Exponentiation (Binary Exponentiation)
#include<iostream>
using namespace std;

long long power(long long base,long long  exponent){
 if(exponent == 0){
    return 1;
 }
 long long res = power(base,exponent/2);
    if(exponent%2==0){
        return res*res;
    }else{
        return base*res*res;
    }
}
int main(){
    long long  base,exponent;
    cout<<"enter base :";
    cin>>base;
    cout<<"enter exponent :";
    cin>>exponent;

    cout << "The result of base " << base << " raised to exponent " << exponent << " is: " << power(base, exponent) << endl;
  

    return 0; 
}
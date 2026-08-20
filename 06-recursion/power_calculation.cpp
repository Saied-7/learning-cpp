//Power Calculation (x^n)
#include<iostream>
using namespace std;

long long power(int base,int exponent){
 if(exponent == 0){
    return 1;
 }
  return base*power(base,exponent-1);
}
int main(){
    int base,exponent;
    cout<<"enter base :";
    cin>>base;
    cout<<"enter exponent :";
    cin>>exponent;

    cout << "The result of base " << base << " raised to exponent " << exponent << " is: " << power(base, exponent) << endl;
  

    return 0; 
}
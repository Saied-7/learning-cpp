#include<iostream>
using namespace std;
int main (){
    long long base,exponent,result = 1;
    cout<<"enter a base :";
    cin>>base;
    cout<<"enter a power :";
    cin>>exponent;

    for(int i=1;i<=exponent;i++){
       result = result*base;
    }
     cout << base << "^" << exponent << " = " << result << "\n";

    return 0;
}

//Power Function (Iterative)
#include<iostream>
using namespace std;

double power(double base,int exponent){
    double pow =1.0;
    long long exp =exponent;
    if(exp<0){
        exp = -exp;
    }

    for(int i=1;i<=exp;i++){
        pow *= base;
    }

    if(exponent<0){
        return (1/pow); 
    }
        return pow;
}

int main (){
    double base;
    int exponent;
    cout<<"enter base : ";
    cin>>base;
    cout<<"enter exponent : ";
    cin>>exponent;
    cout << "The result of base " << base << " raised to exponent " << exponent << " is: " << power(base, exponent) << endl;
  
    return 0;
}

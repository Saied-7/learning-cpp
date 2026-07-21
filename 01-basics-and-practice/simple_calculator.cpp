#include<iostream>
using namespace std;

int main() {
    double num1, num2, sum, sub, mul, div ;
    
    cout<<"please enter your num1 :";
    cin>> num1;
    cout<<"please enter your num2 :";
    cin>> num2;

    sum = num1+num2;
    sub = num1-num2;
    mul = num1*num2;
    div = num1/num2;

    cout<<"the sum of the two number is :  " << sum <<endl;
    cout<<"the subtraction of the two number is :  " << sub <<endl;
    cout<<"the multification of the two number is :  " << mul <<endl;
    cout<<"the divition of the two number is :  " << div <<endl;

    return 0;
    
}
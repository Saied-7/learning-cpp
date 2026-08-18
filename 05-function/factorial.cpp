//Factorial (Iterative)
#include<iostream>
using namespace std;

long long factorial(int num){
    long long fact = 1;
    for(int i=num;i>1;i--){
        fact *= i;
    }
 return fact;
}

int main (){
    int num;
    cout<<"enter a number(n):";
    cin>>num;
    cout<<"the factorial of "<<num<<" is : "<<factorial(num);
  
    return 0;
}

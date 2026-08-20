//Greatest Common Divisor (Euclidean Algorithm)
#include<iostream>
using namespace std;

int gcd(int a,int b){
   if(b==0){
    return a;
   }
   return gcd(b,a%b);
}
int main(){
    int num1,num2;
    cout<<"enter any tow  number :";
    cin>>num1>>num2;

    cout<<"gcd of "<<num1<<" and "<<num2<<" is : "<<gcd(num1,num2);
 

    return 0; 
}
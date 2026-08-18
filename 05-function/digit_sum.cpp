//Digit Sum
#include<iostream>
using namespace std;

int sum_digits(int num){
    int sum = 0;

    while(num>0){
        int lastdigit = num%10;
        sum += lastdigit;
        num = num/10;
    } 

 return sum;
}

int main (){
    int num;
    cout<<"enter a number(n):";
    cin>>num;
    cout<<"the sum of digits is "<<sum_digits(num);
  
    return 0;
}

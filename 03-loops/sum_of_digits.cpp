#include<iostream>
using namespace std;
int main (){

    int number,sum = 0;
    cout<<"enter a positive integer :";
    cin>>number;

    for(;number != 0;number = number/10){
        sum = sum +(number%10);

    }
    cout<<"the sum of digit is :"<<sum;
    return 0;
}

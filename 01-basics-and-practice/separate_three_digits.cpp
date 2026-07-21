#include<iostream>
using namespace std;
int main(){
    int NUMBER,HUNDRED,TEN,ONE;

    cout<<"enter a three digit number :";
    cin>>NUMBER;

    HUNDRED = NUMBER/100;
    TEN = (NUMBER%100)/10;
    ONE = NUMBER%10;

    cout<<HUNDRED<<"\n";
    cout<<TEN<<"\n";
    cout<<ONE<<"\n";


    return 0;
}
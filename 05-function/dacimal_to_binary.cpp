//Decimal to Binary String
#include<iostream>
#include <string>
#include <algorithm>
#include <cassert>
using namespace std;

string to_binary(int a){
    if(a == 0) return "0";
    string result ="";
    for(;a>0;a/=2){
        result += (a % 2 == 0? '0' : '1');
    }
    
    reverse(result.begin(),result.end());
    return result;
}


int main(){
    int a;
    cout<<"enter a decimal number :";
    cin>>a;

    cout<<to_binary(a);
  
    return 0;
}
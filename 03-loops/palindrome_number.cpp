#include<iostream>
using namespace std;
int main (){
    int number, forward,backward = 0;
    cout<<"enter a number (to check it's palindrome or not) :";
    cin>>number;

    forward = number;

    for(;number != 0;number = number/10){
        int lastdigit = (number%10);
        backward = (backward * 10)+lastdigit;
    }
    if(forward == backward ){
        cout<<forward<<" is palindrome number";
    }else{
        cout<<forward<<" is not a palindrome";
    }
    
    return 0;
}

//Reverse Integer
#include<iostream>
using namespace std;

int reverse_integer(int num){
    int rev = 0;

    for(;num!=0;num =num/10){
        int lastdigit= num%10;
        rev =(rev*10)+lastdigit;
    }

 return rev;
}

int main (){
    int num;
    cout<<"enter a integer:";
    cin>>num;

    cout<<"the reverse integer is: "<<reverse_integer(num);

    return 0;
}

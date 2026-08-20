//Count Even Digits
#include<iostream>
using namespace std;

int digit(int num){
    if(num==0){
        return 0;
    }
    if((num%10)%2 == 0){
        return 1 + digit(num/10);
    }else{
        return 0 + digit(num/10);
    }
}
int main(){
    int num;
    cout<<"enter a number :";
    cin>>num;

    cout<<"total even digit of "<<num<<" is : "<<digit(num);
 

    return 0; 
}
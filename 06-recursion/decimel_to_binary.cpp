//Decimal to Binary Conversion
#include<iostream>
using namespace std;

void binary(int num){

    if(num == 0){
    return;
    }
    binary(num/2);
    cout<<(num%2);
  
}
int main(){
    int num;
    cout<<"enter decimal number :";
    cin>>num;

    if(num == 0){
        cout<<0;
    }else {
    binary(num);
    }
    return 0; 
}
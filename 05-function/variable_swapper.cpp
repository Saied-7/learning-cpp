//Variable Swapper
#include<iostream>
using namespace std;

 void swap_integers (int& a,int& b){
  int temp = a;
  a = b;
  b = temp;
}

int main(){
    int num1,num2; 
    
    cout<<"enter two numbers :";
    cin>>num1>>num2;
    
    cout<<"before swapping :"<<num1<<" "<<num2<<endl;
    swap_integers (num1,num2);
    cout<<"after swapping :"<<num1<<" "<<num2;

    return 0;
}

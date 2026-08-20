//Sum of Natural Numbers
#include<iostream>
using namespace std;

int sum_of_n(int num){
    if(num<=1){
    return num;
    }
    return num += sum_of_n(num-1);
  
}
int main(){
    int num;
    cout<<"enter a number :";
    cin>>num;

    cout<<"sum of n number is : "<<sum_of_n(num);

    return 0; 
}
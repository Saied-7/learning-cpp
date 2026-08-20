//Count Digits
#include<iostream>
using namespace std;

int digit(int num){
    if(num<10){
        return 1;
    }
    return 1 + digit(num/10);

}
int main(){
    int num;
    cout<<"enter a number :";
    cin>>num;

    cout<<"total digit of "<<num<<" is : "<<digit(num);
 

    return 0; 
}
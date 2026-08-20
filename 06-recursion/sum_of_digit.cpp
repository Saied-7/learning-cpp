//Sum Of Digits
#include<iostream>
using namespace std;

int sumofdigit(int num){
    if(num == 0){
        return 0;
    }
    return  (num%10)+sumofdigit(num/10);

}
int main(){
    int num;
    cout<<"enter a number :";
    cin>>num;

    cout<<"sum of digit of "<<num<<" is : "<<sumofdigit(num);
 

    return 0; 
}
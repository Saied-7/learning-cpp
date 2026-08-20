//Reverse an Integer
#include<iostream>
using namespace std;

int reverse(int num,int rev = 0){
    if(num==0){
    return rev;
}
return reverse(num/10,(rev * 10) + (num % 10));

}
int main(){
    int num;
    cout<<"enter a number :";
    cin>>num;

    cout<<"reverse of "<<num<<" is : "<<reverse(num);
 

    return 0; 
}
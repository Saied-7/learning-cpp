#include<iostream>
using namespace std;
int main (){
    int num;
    cout<<"enter a number :";
    cin>>num; 


    if (num <= 1){
        cout<<"not a prime number .";
        return 0;
    }
 
    bool prime = true;
    for(int i=2; i*i<=num;i++){
        if(num % i== 0){
            prime = false;
            break;
        }
    }
    if(prime == true){
        cout<<"prime numbe .";
    }else {
        cout<<"not prime .";
    }

    return 0;
}

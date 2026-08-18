//Prime Number Test
#include<iostream>
using namespace std;

bool is_prime(int num){
    if (num <= 1){
        return false;
    } 
    for(int i=2; i*i<=num;i++){
        if(num % i== 0){
            return false;
        }
    }
    return true;
}

int main(){
    int num; 
    
    cout<<"enter a numbers :";
    cin>>num;
    
    if(is_prime(num)){
        cout<<"prime number.";
    }else{
        cout<<"not a prime number.";
    }
    
    return 0;
}

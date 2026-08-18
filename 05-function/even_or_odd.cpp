//Even or Odd
#include<iostream>
using namespace std;

bool is_even (int number){
  return number%2 == 0;
}

int main(){
    int number; 
    
    cout<<"enter a number :";
    cin>>number;
   
    if(is_even(number)){
        cout<<number<<" is even.";
    }else{
        cout<<number<<" is odd.";
    }

    return 0;
}

#include<iostream>
using namespace std;
int main (){

    int number,rev = 0;
    cout<<"enter a positive integer :";
    cin>>number;
    
    for(;number !=0;number = number/10){
        int lastdigit = (number%10);
        rev = (rev * 10)+lastdigit;
    }
    cout<<"the reverse of "<<number<<" is : "<<rev;
  
    return 0;
}

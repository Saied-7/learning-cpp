#include<iostream>
#include<cmath>
using namespace std;
int main (){
    int number, original,sum = 0,count =0;
    cout<<"enter a number  :";
    cin>>number;

    int temp = number;
    original = temp;

    if(number == 0){
        count =1;
    }else {
    for(;number != 0;number = number/10){
        count ++ ;
     } 
    }
    for(;temp != 0;temp = temp/10){
        int lastdigit = (temp%10);
        sum = sum + round(pow(lastdigit,count));
    }
    if(original == sum){
        cout<<"armstrong number ";
    }else {
        cout<<"not armstrong number ";
    }
    
    return 0;
}

#include<iostream>
using namespace std;
int main (){

    int number,count = 0;
    cout<<"enter a positive integer :";
    cin>>number;
     int original = number;

    while(number > 0){
         number = number/10;
         count ++;

    }
    cout<<"total digit in "<<original<<" is "<<count;

    return 0;
}

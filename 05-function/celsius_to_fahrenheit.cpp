//Celsius to Fahrenheit
#include<iostream>
using namespace std;

double celsius_to_fahrenheit (double c){
 
  return (c*9/5)+32;
}

int main(){
    double c; 
    
    cout<<"please enter the valu of celsius scale:";
    cin>>c;

    cout<<"the valu of fahrenheit scle is : "<<celsius_to_fahrenheit(c)<<endl;
   
    return 0;
}
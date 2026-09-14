//Calculate Area and Perimeter Simultaneously Write a function
#include<iostream>
using namespace std;
void calculaterectangle(int length, int width,int* area,int* perimeter){
 
    *area = (length*width);
    *perimeter = 2*(length+width);
}
int main (){
    int a,b,area,perimeter;
    cout<<"enter the length : ";
    cin>>a;
    cout<<"enter the width : ";
    cin>>b;

    calculaterectangle(a, b, &area , &perimeter );

    cout<<"area : "<<area;
    cout<<"\nperimeter : "<<perimeter;

    return 0;
}
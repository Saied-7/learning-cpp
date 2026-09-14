//Finding Minimum and Maximum
#include<iostream>
using namespace std;
void findminmax(int num1, int num2,int* minimum,int* maximum){
    *minimum = min(num1,num2);
    *maximum = max(num1,num2);
 
}
int main (){
    int a,b, minimum , maximum ;
    cout<<"enter first number : ";
    cin>>a;
    cout<<"enter second number : ";
    cin>>b;

    findminmax(a, b, &minimum , &maximum );

    cout<<"minimum of two number is : "<<minimum;
    cout<<"\nmaximum of two number is : "<<maximum;

    return 0;
}
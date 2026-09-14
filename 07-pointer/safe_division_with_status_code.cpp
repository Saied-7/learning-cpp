//Safe Division with Status Code
#include<iostream>
using namespace std;
int divide(int dividend,int divisor,float* result){
    if(divisor == 0){
        return 0;
    }else{
        *result = (dividend / divisor );
        return 1;
    }

}
int main (){
    int dividend,divisor;
    float result;
    cout<<"enter the dividend : ";
    cin>>dividend;
    cout<<"enter the divisor : ";
    cin>>divisor;

    if(divide(dividend,divisor,&result)){
        cout<<"result : "<<result;
    }else{
        cout<<"can't dividing by zero .";
    }

    return 0;
}
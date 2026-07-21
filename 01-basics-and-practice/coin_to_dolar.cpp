#include<iostream>
using namespace std;
int main (){
    float Q,D,N,P,ADD;
 
    cout<<"enter how many penny you have :"
    << endl;
    cin>>P;
    cout<<"enter how many nickel you have :"
    << endl;
    cin>>N;
    cout<<"enter how many dime you have :"
    << endl;
    cin>>D;
    cout<<"enter how many quarter you have :"
    << endl;
    cin>>Q;

    ADD = (P*0.01)+(N*0.05)+(D*0.1)+(Q*0.25);
    cout<<"the total value in dollar is : $"<<ADD;
    


    return 0;
}
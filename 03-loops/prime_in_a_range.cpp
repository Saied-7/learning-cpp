#include<iostream>
using namespace std;
int main (){
    int A,B;
    cout<<"enter A and B :";
    cin>>A>>B;
    cout<<"prime number :";


    for(int i=A;i<=B;i++){
        if(i<=1) continue;

        bool isprime = true ;
        for(int j=2;j*j<=i;j++){
            if(i%j ==0){
                isprime = false;
                break;
            }
        }
        if(isprime){
            cout<<i<<" \n";
        }

    }
    return 0;
}

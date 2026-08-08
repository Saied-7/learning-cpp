#include<iostream>
using namespace std;
int main (){
    int userpin,secretpin = 12345;

    do{
        cout<<"enter a pin :";
        cin>>userpin;

    }while(userpin != secretpin);
    cout<<"Access Granted!\n";
    return 0;
}

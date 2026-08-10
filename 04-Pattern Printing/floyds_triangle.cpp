//Floyd's Triangle
#include<iostream>
using namespace std;
int main (){
    int num1,num2 =1;
    cout<<"enter a number :";
    cin>>num1;

    for(int i = 1;i<=num1;i++){
        for(int j=1;j<=i;j++){
            cout<<num2<<" ";
            num2 ++;
        }
        cout<<endl;
    }
    return 0;
}

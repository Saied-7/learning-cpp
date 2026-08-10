//Inverted Repeating Number Triangle
#include<iostream>
using namespace std;
int main (){
    int number;
    cout<<"enter a number :";
    cin>>number;

    for(int i = number;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";

        }
        cout<<endl;
    }
    return 0;
}

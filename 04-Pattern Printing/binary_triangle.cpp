//Binary Triangle (0-1 Alternate)
#include<iostream>
using namespace std;
int main (){
    int number;
    cout<<"enter a number :";
    cin>>number;

    for(int i =1;i<=number;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2 ==1){
            cout<<" 0";
            }else{
                cout<<" 1";
            }
        }
        cout<<endl;
    }
    return 0;
}
 

#include<iostream>
using namespace std;
int main (){
    int choice ;
    float num1,num2;

    do{ 
        cout<<"     MENU       ";
        cout<<"\n1.add\n"<<"2.subtract\n"<<"3.exit\n";
        cout<<"enter your choice :";
        cin>>choice;

        if(choice == 1){
            cout<<"enter first number :";
            cin>>num1;
            cout<<"enter second number :";
            cin>>num2;
            float add = num1 + num2;
            cout<<"the addition of two number is : "<<add<<endl;
        }
        else if(choice == 2){
            cout<<"enter first number :";
            cin>>num1;
            cout<<"enter second number :";
            cin>>num2;
            float subtract = num1 - num2;
            cout<<"the subtract of two number is : "<<subtract<<endl;
        }  
         else if(choice == 3){
         cout<<"goodbye!"<<endl;
        }
         else{
         cout<<"invalid choice! try again ."<<endl;
        }
    }while(choice != 3);

   return 0;
}

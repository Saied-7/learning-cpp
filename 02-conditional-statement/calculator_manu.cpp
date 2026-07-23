#include<iostream>
using namespace std ;
int main() {
    int choice;
    double num1,num2;

    cout<<"    MENU    \n"<<"1. ADD\n"<<"2. SUBTRACT\n"<<"3. MULTIPLE\n"<<"4. DIVIDE\n"<< "please enter your choice :";
    cin>>choice;
    cout<<"enter the 1st number :";
    cin>>num1;
    cout<<"enter the 2nd number :";
    cin>>num2;

    switch (choice)
    {
    case 1:
        cout<<"the addition of two number is :"<<num1+num2;
        break;
    case 2:
        cout<<"the subtraction of two number is :"<<num1-num2;
        break;
    case 3:
        cout<<"the multiplication of two number is :"<<num1*num2;
        break;
    case 4:
    if (num2 != 0) {
            cout << "the division of two number is :" << num1 / num2;
        } else {
            cout << "Error: Cannot divide by zero!";
        }
        break;    
    default:
        cout<<"invalid list";
        break;
    }

    return 0;
}
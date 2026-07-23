#include<iostream>
using namespace std ;
int main() {
    int A; 
    cout<<"enter a year :";
    cin>>A;

   if (A % 4 == 0) {
        if (A % 100 == 0) {
            if (A % 400 == 0) {
                cout << A << " is a leap year";
            } else {
                cout << A << " is NOT a leap year";
            }
        } else {
            cout << A << " is a leap year";
        }
    } else {
        cout << A << " is NOT a leap year";
    }
    return 0;
}
#include <iostream>
#include <string> 
using namespace std;

int main() {

    string correctUser = "admin";
    string correctPass = "pass123";

    string inputUser, inputPass;

    cout << "Enter username: ";
    cin >> inputUser;

    cout << "Enter password: ";
    cin >> inputPass;

    if (inputUser == correctUser) {
        
        if (inputPass == correctPass) {
            cout << "Access Granted! Welcome, " << correctUser << "." << endl;
        } 
        else {
            cout << "Access Denied: Incorrect password." << endl;
        }

    } 
    else {
        cout << "Access Denied: Username not found." << endl;
    }

    return 0;
}
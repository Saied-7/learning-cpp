#include<iostream>
using namespace std ;
int main() {
    char ch;

    cout << "Enter an English letter: ";
    cin >> ch;

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << ch << " is a Vowel." << endl;
            break;

        default :
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                cout << ch << " is a Consonant." << endl;
            } else {
                cout << "Invalid input! Please enter an alphabet." << endl;
            }
            break;
    }

    return 0;
    
}
//Count Uppercase, Lowercase, Digits and Special Characters
#include<bits/stdc++.h>
using namespace std;
// Function that counts uppercase letters, lowercase letters, digits, and special characters in a string.
void count_ulds(string s)
{
    int up = 0, low = 0, dig = 0, spc = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if((s[i] >= 'a' && s[i] <= 'z'))
        {
            low++;
        }
        else if((s[i] >= 'A' && s[i] <= 'Z'))
        {
            up++;
        }
        else if((s[i] >= '0' && s[i] <= '9'))
        {
            dig++;
        }
        else
        {
            spc++;
        }
     
    }
    cout<<"uppercase = "<<up<<endl<<"lowercase = "<<low<<endl<<"Digits = "<<dig<<endl<<"Special = "<<spc;
}

int main()
{
    cout<<"enter a string: ";
    string s;
    getline(cin,s);
    count_ulds(s);

 return 0;
}

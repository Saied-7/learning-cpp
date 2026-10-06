//Check Palindrome
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"enter a string: ";
    string s ;
    getline(cin,s);
    string forward = s;
    string backward;
    for(int i=s.length()-1;i>=0;i--)
    { 
        backward += s[i];
    }
    if(forward == backward)
    {
        cout<<"palindrome.";
    }
    else
    {
        cout<<"not palindrome.";
    }

 return 0;
}

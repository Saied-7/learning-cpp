#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"enter a string: ";
    string s;
    getline(cin,s);
    int n = s.length();
    for(int i=n-1;i>= 0;i--)
    {
       cout<<s[i];
    }

 return 0;
}

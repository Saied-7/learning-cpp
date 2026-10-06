//Find the Frequency of Each Character
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"enter a string: ";
    string s;
    getline(cin,s);
    int frequency[26] = {0};

    //count frequancy
    for(int i=0;i<s.length();i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            frequency[s[i] - 'a']++;
        }
    }
    //print frequency 
    cout<<"Character frequency"<<endl;
    for(int i=0;i<26;i++)
    {
        if(frequency[i] > 0)
        {
            cout<<char(i + 'a')<<" = "<<frequency[i]<<endl;
        }
    }

 return 0;
}

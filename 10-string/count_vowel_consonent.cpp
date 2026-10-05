//Count Vowels and Consonants
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int vowel = 0,consonent = 0;
    cout<<"enter a string: ";
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == 'a'||s[i] == 'e'||s[i] == 'i'||s[i] == 'o'||s[i] == 'u'||s[i] == 'A'||s[i] == 'E'||s[i] == 'I'||s[i] == 'O'||s[i] == 'U')
        {
            vowel++;
        }
        else if (isalpha(s[i]))
        {
            consonent++;
        }
    }
    cout<<"OUTPUT"<<endl;
    cout<<"vowels: "<<vowel<<endl<<"consonent: "<<consonent;
 return 0;
}

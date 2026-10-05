//Count Words in a Sentence
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"enter a sentence: ";
    string s;
    getline(cin,s);
    int word = 0,n = s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i] != ' ' && (i == 0 || s[i-1] == ' '))
        {
            word++;
        }
    }
    cout<<"thare are "<<word<<" words in this sentence.";
    
 return 0;
}

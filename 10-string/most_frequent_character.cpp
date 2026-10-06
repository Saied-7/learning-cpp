//Find the Most Frequent Character
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"enter a string: ";
    string s;
    getline(cin,s);
    int frequency[26] = {0};
    int max = 0;
    char maxch = 'a';

    //count frequancy
    for(int i=0;i<s.length();i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            frequency[s[i] - 'a']++;
        }
    }
    //find the most frequent character
    cout<<"most frequency character:"<<endl;
    for(int i=0;i<26;i++)
    {
        if(frequency[i] > max)
        {
            max = frequency[i];
            maxch = char(i + 'a');
        }
    }
    cout<<"most frequent character: "<<maxch<<endl<<"frequency: "<<max;
 return 0;
}

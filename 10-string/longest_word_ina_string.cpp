//Find the Longest Word in a Sentence
#include<bits/stdc++.h>
using namespace std;

//function that finds the longest word in a sentence
string longestWord(string s)
{
    string word = "";
    string longest = "";

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] != ' ')
        {
            word += s[i];
        }
        else
        {
            if(word.length() > longest.length())
            {
                longest = word;
            }

            word = "";
        }
    }

    // Check the last word
    if(word.length() > longest.length())
    {
        longest = word;
    }
 
    return longest;
}

int main()
{
    cout<<"enter a sentence: ";

    string s;
    getline(cin,s);

    cout<<"Longest word: "<<longestWord(s);

 return 0;
}

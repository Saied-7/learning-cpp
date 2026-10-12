//Remove Duplicate Characters
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"enter a string: ";
    string s,result = "";
    getline(cin,s);

    //check each character
    for(int i = 0; i < s.length(); i++)
    {
        bool found = false;
        for(int j = 0; j < result.length(); j++)
        {
            //Check whether the character already exists or not
            if(result[j] == s[i])
            {
                found = true;
                break;
            }
        }
        //If this character already exists, skip it
        if(found == false)
        {
            result += s[i];
        }
    }

    cout<<"string after removing duplicates: "<<result;

 return 0;
}

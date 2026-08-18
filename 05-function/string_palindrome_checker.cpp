//String Palindrome Checker
#include<iostream>
#include<string>
using namespace std;

 bool is_plaindrome(const string& text){
    if(text.empty()){
        return true;
    }
    for(size_t left=0,right=text.size()-1;left<right;++left,--right){
        if(text[left] != text[right]){
            return false;
        }
    }

 return true;
}
int main (){
    string str1;
    cout<<"enter a string :";
    getline(cin,str1);
    
    if(is_plaindrome(str1)){
        cout<<"it's a plaindrome.";
    }else{
        cout<<"it's not a plaindrome.";
    }
    
    return 0;
} 

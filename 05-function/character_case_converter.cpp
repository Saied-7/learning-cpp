//Character Case Converter
#include<iostream>
using namespace std;

char to_upper (char ch){
    if(ch>='a' && ch<='z'){
  return ch-32;
}else{
    return ch;
}
}

int main(){
    char ch; 
    
    cout<<"enter a lowercase character :";
    cin>>ch;

    cout<<"converted upeercase is :"<< to_upper(ch);

    return 0;
}
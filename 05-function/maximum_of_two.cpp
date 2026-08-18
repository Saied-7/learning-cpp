//Maximum of Two
#include<iostream>
using namespace std;

int  find_max (int a,int b){
  if(a>b){
        return a;
    }else{
        return b;
    }
}
int main(){
    int a,b; 
    
    cout<<"enter two number :";
    cin>>a>>b;

    cout<<find_max(a,b)<<" is larger.";

    return 0;
}
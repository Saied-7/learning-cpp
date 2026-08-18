//Pass or Fail Grade
#include<iostream>
using namespace std;

bool is_passing(double score,double passig_mark=60.0){

  return score>=passig_mark;
}

int main(){
    double mark; 

    
    cout<<"enter your mark :";
    cin>>mark;
   
    if(is_passing(mark)){
        cout<<"you are passed.";
    }else{
        cout<<"you are failed.";
    }

    return 0;
}
//Stats Tracker (Multiple Return Values)
#include<iostream>
#include<algorithm>
using namespace std;

void get_stats(int a,int b,int c,int& max_val,int& min_val,double& average){
    max_val = max({a,b,c});
    min_val = min({a,b,c});

    average = (a+b+c)/3.0;
}

int main(){
    int a,b,c,min,max;
    double avg;
    cout<<"enter three number :";
    cin>>a>>b>>c;

    get_stats(a,b,c,max,min,avg);
    cout<<"Min : "<<min<<endl;
    cout<<"Max : "<<max<<endl; 
    cout<<"Average : "<<avg<<endl;

  return 0;
}


//Convert Total Seconds to Hours and Minutes
#include<iostream>
using namespace std;
void converttime(int sec,int* hours,int* min,int* remsec){
    int remain;
    *hours = sec /3600;
    remain = sec % 3600;
    *min = remain /60;
    *remsec = remain % 60;
}

int main (){
   int second,hours,min,remsec;
   cout<<"enter the total second : ";
   cin>>second;
   converttime(second,&hours,&min,&remsec);

   cout<<"hours : "<<hours<<"\nmin : "<<min<<"\nsecond : "<<remsec;

    return 0;
}
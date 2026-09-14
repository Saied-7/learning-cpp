//Variable Assignment via Dynamic Memory Allocation
#include<bits/stdc++.h>
using namespace std;
void allocatevalue(int** pp, int value){
     *pp = new int;
     **pp = value;
}

int main(){

   int* ptr = nullptr;
   allocatevalue(&ptr,20);
     cout<<"the value of pte is : "<<*ptr;

    delete ptr;
 return 0;
}

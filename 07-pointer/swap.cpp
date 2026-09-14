//In-Place Value Swap via Pointer Reference
#include<iostream>
using namespace std;
void swapvalue(int* a,int* b){
 if (a != b){
  *a = *a + *b;
  *b = *a - *b;
  *a = *a - *b; 
}
}
int main (){
    int a,b;
    cout<<"enter two number : ";
    cin>>a>>b;
    cout<<"before swapping : a = "<<a<<" b = "<<b;

    swapvalue(&a,&b);

    cout<<"\nafter swapping : a = "<<a<<" b = "<<b;

    return 0;
}
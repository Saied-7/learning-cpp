#include<iostream>
using namespace std ;
int main() {
    int A,B,C;
    cout<<"enter the 1st side length of triangle :";
    cin>>A;   
    cout<<"enter the 2nd side length of triangle :";
    cin>>B;   
    cout<<"enter the 3rd side length of triangle :";
    cin>>C;   

    if(A==B && A==C && B==C ){
        cout<<"All 3 sides are equal";
    } else if(A==B || A==C || B==C ){
        cout<<"2 sides are equal";
    }else {
        cout<<"All 3 sides are different";
    }

    return 0;
}
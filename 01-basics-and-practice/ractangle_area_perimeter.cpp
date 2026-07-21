#include<iostream>
using namespace std ;
int main() {
    double L,W,AREA,PERIMETER;

    cout<<"please enter the length of ractangle : "<<endl;
    cin>> L;
    cout<<"please enter the width of ractangle :"<<endl;
    cin>> W;

    AREA = (L*W);
    PERIMETER = (2.0*(L*W));

    cout<<"the area of ractangle is :"<<AREA<<endl<<
    "the perimeter of ractangle is : "<< PERIMETER ;

    return 0;
}
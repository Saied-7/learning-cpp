//Rectangle Area & Perimeter
#include<iostream>
using namespace std;

double get_area (double length,double width){
   return length*width;
}

int main(){
    double length,width; 

    cout<<"enter the length of rectangle :";
    cin>>length;
    cout<<"enter the width of rectangle :";
    cin>>width;
     
    double area =get_area(length,width);
    cout<<"the area of rectangle is : "<<area;

    return 0;
}

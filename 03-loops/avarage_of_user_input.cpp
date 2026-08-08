#include<iostream>
using namespace std;
int main (){
    double total_sum =0.0;
    int count = 0;
    double num;

    for(;;){
        cout<<"enter a number (-1 to stop): ";
        cin>>num;
        
        if(num == -1){
            break;
        }
        total_sum += num;
        count++;
    }
    
    if(count > 0){
        double average = total_sum/count;

        cout<<"Sum :"<<total_sum;
        cout<<"\nAverage :"<<average;

    }else{
        cout<<"invalid number .";
    }

    return 0;
}

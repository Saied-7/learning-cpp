//Average of Array Elements
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the array size :";
    cin>>n;
    int arr[n];
    float sum = 0,ave;
    cout<<"enter the elements of array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    ave = (sum / n);
    cout<<"The average of Array elements is :"<<ave<<endl;
 return 0;
}

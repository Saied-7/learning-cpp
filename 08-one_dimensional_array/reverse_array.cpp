//Reverse the Array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the array size :"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the element of array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The element of the Array is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"the reverse element of the Array is : "<<endl;
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<endl;
    }
 return 0;
}

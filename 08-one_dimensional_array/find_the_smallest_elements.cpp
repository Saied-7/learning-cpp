//Find the Smallest Element
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the array size :";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int smallest = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] < smallest){
           smallest = arr[i];
        }
    }
    cout<<"smallest element is : "<<smallest;
 return 0;
}

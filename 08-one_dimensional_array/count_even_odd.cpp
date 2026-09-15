//Count Even and Odd Numbers
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,even=0,odd=0;
    cout<<"enter the array size : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the element of array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i] % 2 == 0){
            even++;
        }else{
            odd++;
        }
    }
    cout<<"Even numbers = "<<even<<endl;
    cout<<"Odd numbers = "<<odd<<endl;
 return 0;
}

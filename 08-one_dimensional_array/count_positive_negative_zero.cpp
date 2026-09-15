//Count Positive, Negative and Zero
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,positive=0,negative=0,zero=0;
    cout<<"enter the array size : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the element of array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i] > 0){
            positive++;
        }else if(arr[i] < 0){
            negative++;
        }else{
            zero++;
        }
    }
    cout<<"positive  = "<<positive<<endl;
    cout<<"negative  = "<<negative<<endl;
    cout<<"zero = "<<zero<<endl;
 return 0;
}

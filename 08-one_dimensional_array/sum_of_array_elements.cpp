//Sum of Array Elements
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5];
    int add=0;
for(int i=0;i<=4;i++){
    cin>>arr[i];
}
for(int i=0;i<=4;i++){
    add += arr[i];
}
cout<<"The sum of Array elements is :"<<add<<endl;
 return 0;
}

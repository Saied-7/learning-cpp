//Search for an Element
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[5] = {4,5,6,3,5};
  int a,found = 0;
  cout<<"enter an number : "<<endl;
  cin>>a;
  for(int i=0;i<5;i++){
    if(arr[i]==a){
       found = 1;
    }
  }
  if(found == 1){
    cout<<"found";
  }else{
    cout<<"not found";
  }
 return 0;
}

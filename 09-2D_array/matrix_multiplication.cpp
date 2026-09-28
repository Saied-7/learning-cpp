//Matrix Multiplication
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,o,p;
    cout<<"enter the matrix 1 row and column"<<endl;
    cin>>n>>m;
    int mata[n][m];
    cout<<"enter the matrix 1 element : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mata[i][j];
        }
    }
    cout<<"enter the matrix 2 row and column"<<endl;
    cin>>o>>p;
    int matb[o][p];
    cout<<"enter the matrix 2 element : "<<endl;
    for(int i=0;i<o;i++){
        for(int j=0;j<p;j++){
            cin>>matb[i][j];
        }
    }
    if(m == o){
        int result[n][p];
        for(int i=0;i<n;i++)//result rows
        {
            for(int j=0;j<p;j++)//result columns
            {
                result[i][j] = 0;
                for(int k=0;k<m;k++){
                    result[i][j] += (mata[i][k])*(matb[k][j]);
                }
            }
        }
    cout<<"Result matrix: "<<endl;
    for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < p; j++)
            {
                cout << result[i][j] << " ";
            }
            cout << endl;
    }
    }else{
        cout<<"Multiplication not possible !"<<endl;
    }
 return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"ENTER THE NUMBER OF ROWS AND COLOUMNS :";
    cin>>n>>m;
    int a[n][m];
    cout<<"ENTER THE ELEMENTS :";
    
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
        
    }
    cout<<"THE MATRIX IS : \n ";
    
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<a[i][j]<<" ";
            
        }
        cout<<"\n";
        
    }
    cout<<"THE TRANSPOSE MATRIX IS : \n";
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<a[j][i]<<" ";
            
        }
        cout<<"\n";
        
    }
    return 0;
}
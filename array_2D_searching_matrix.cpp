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
    int h;
    bool flag=0;
    cout<<"ENTER THE YOU WANT TO FIND :";
    cin>>h;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i][j]==h)
            {
                cout<<"ELEMENT IS AT INDEX : ("<<i+1<<","<<j+1<<")";
                flag=1;
                break;
            }
        }
        
        
    }
    if(flag==0)
    {
        cout<<"ELEMENT IS NOT PRESENT :";
    }
    return 0;
}
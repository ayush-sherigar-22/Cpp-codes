#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cout<<"SIZE OF ARRAY :";
    cin>>n;
    int a[n];
    cout<<"ENTER THE ELEMENTS :";
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    cout<<"ALL SUB ARRAY'S ARE :";
    for (int i = 0; i <n; i++)
    {
        
        for (int j = i; j <n; j++)
        {
            
            cout<<a[j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
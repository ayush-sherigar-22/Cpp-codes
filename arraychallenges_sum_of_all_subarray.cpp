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
    cout<<"SUM OF ALL SUB ARRAY IS :";
    int count=0;
    for (int i = 0; i <n; i++)
    {
        count=0;
        for (int j = i; j <n; j++)
        {
            count+=a[j];
            cout<<count<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
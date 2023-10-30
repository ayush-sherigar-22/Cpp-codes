#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER SIZE OF ARRAY :";
    cin>>n;
    int a[n];
    cout<<"ENTER ELEMENTS OF ARRAY:";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"REVERSE OF ARRAY IS:";
    for (int i = n-1; i > -1; i--)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
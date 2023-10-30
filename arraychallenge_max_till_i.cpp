#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER SIZE OF ARRAY:";
    cin>>n;
    int a[n];
    cout<<"ENTER ELEMENTS OF ARRAY :";
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        mx=max(mx,a[i]);
        cout<<"\n MAX TILL"<<i<<"is:"<<mx;
    }
    return 0;
}
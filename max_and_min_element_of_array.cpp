#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER SIZE OF ARRAY :";
    cin>>n;
    int a[n];
    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    cout<<"ENTER ELEMENTS OF ARRAY :";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo,a[i]);
        minNo = min(minNo,a[i]);
    }
    cout<<"MAX NUMBER IS : "<<maxNo;
    cout<<"\n MIN NUMBER IS :"<<minNo;
    
    return 0;
}
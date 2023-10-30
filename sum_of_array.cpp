//sum of elemets of array stored in other array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"SIZE OF ARRAY :";
    cin>>n;
    int a1[n],a2[n],sum[n];
    cout<<"ENTER ELEMENTS OF ONE ARRAY :";
    for (int i = 0; i <n; i++)
    {
        cin>>a1[i];
    }
    cout<<"ENTER ELEMENTS OF SECOND ARRAY :";
    for (int i = 0; i <n; i++)
    {
        cin>>a2[i];
    }
    for (int i = 0; i < n; i++)
    {
    
        sum[i]= a1[i]+a2[i];
    }
    for (int i = 0; i <n; i++)
    {
        cout<<" "<<sum[i];
    }
    return 0;
}
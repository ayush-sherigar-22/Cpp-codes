#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER THE SIZE OF ARRAY :";
    cin>>n;
    int a[n];
    cout<<"ENTER THE ELEMENTS OF ARRAY :";
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    int ans=INT_MIN;
    
    for (int i = 0; i <n; i++)
    {
        int sum=0;
        sum+=a[i];
        for (int j = i+1; j <n; j++)
        {
            sum+=a[j];
        }
        ans=max(sum,ans);
    }
    cout<<"THE MAX SUM OF SUBARRAY IS :"<<ans;
    
    return 0;
}
//prefix sum method
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
    int cumsum[n+1];
    cumsum[0]=0;
    for (int i = 1; i <=n; i++)
    {
        cumsum[i]=cumsum[i-1]+a[i-1];
    }
    int sumMax=INT_MIN;
    for (int i = 1; i <=n; i++)
    {
        int sum=0;
        sumMax=max(sumMax,cumsum[i]);
        for (int j =1; j <=i; j++)
        {
            sum=cumsum[i]-cumsum[j-1];
            sumMax=max(sum,sumMax);    
        }
        
    }
    cout<<"THE MAX SUM OF SUBARRAY IS :"<<sumMax;
    
    return 0;
}
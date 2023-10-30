#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER SIZE OF ARRAY: ";
    cin>>n;
    int a[n];
    cout<<"ENTER  ELEMENTS OF ARRAY:";
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    int mx=INT_MIN;
    a[n]=-1;
    int ans=0;
    if(n==1)
    {
        cout<<"NUMBER OF RECORD BREAKER DAY IS:"<<1;

    }
     else
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]>mx && a[i]>a[i+1])
            {    
                ans++;
             
            }
            mx=max(mx,a[i]);
        }
    cout<<"NUMBER OF RECORD BREAKER DAYS ARE:"<<ans;
    }
    
    return 0;
}
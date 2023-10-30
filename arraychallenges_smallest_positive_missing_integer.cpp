#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER THE SIZE OF ARRAY :";
    cin>>n;
    cout<<"ENTER THE ELEMENTS OF ARRAY :";
    int a[n];
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    const int N=1e6+2;
    bool check[N];
    for ( int i = 1;i <N; i++)
    {
        check[i]=0;
    }
    for (int i = 0; i <n; i++)
    {
        if(a[i]>=0)
        {
            check[a[i]]= 1;
        }
       
    }
    int ans= -1;
     for (int i = 1; i <n; i++)
    {
        if(check[i]==0)
        {
            ans=i;  
            break;
        }
        
        
    }
    cout<<"SMALLEST MISSING POSITIVE INTEGER IS :"<<ans;
    
    return 0;
}
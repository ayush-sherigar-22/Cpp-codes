#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER SIZE OF ARRAY :";
    cin>>n;
    int a[n];
    cout<<"ENTER THE ELEMENTS OF ARRAY :";
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    bool flg=0;
    int ans;
    for (int i = 0; i <n; i++)
    {
        if(i==0)
        {
            ans=a[0];
        }
        else if(a[i]==ans)
        {
            flg=1;           
            break;
        }
        else
        {
            ans=a[i];
        }
    }
    if(flg==1)
    {
        cout<<"FIRST REPEATING ELEMENT IS :"<<ans;   
    }
    else
    {
        cout<<"FIRST REPEATING ELEMENT IS :"<<-1;
    }
    return 0;
}
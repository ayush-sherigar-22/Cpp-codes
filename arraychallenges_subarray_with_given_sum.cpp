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
    int sum;
    int ans1=0,ans2=0;
    cout<<"ENTER THE SUM :";
    cin>>sum;
    if(a[0]==sum)
    {
        ans1+=1;
        ans2=0;
        cout<<" THE SUBARRAY IS :"<<ans1<<" "<<ans2;
    }
    bool flg=0;
    for (int i = 0; i <n; i++)
    {
        int ans=a[i];
        for (int j = i+1; j<n; j++)
        {
            ans+=a[j];
            if(ans==sum)
            {
                ans1=i+1;
                ans2=j+1;
                flg=1;
                break;
            }
        }
        if(flg==1)
        {
            break;
        }
       
    }
    cout<<" THE START AND END POINT OF SUBARRAY IS :"<<ans1<<" "<<ans2;
    return 0;
}
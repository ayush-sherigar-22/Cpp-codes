#include<bits/stdc++.h>
using namespace std;
bool pairsum(int a[], int n,int sum)
{
    int i=0;
    int j=n-1;
    while (i<j)
    {
        
        if(a[i]+a[j]==sum)
        {
            cout<<"THE INDEX IS :"<<i+1<<" "<<j+1;
            return true;
        }
        else if(a[i]+a[j]>sum)
        {
            j=j-1;
        }
        else
        {
            i=i+1;
        }
    }
    return false;
}
int main()
{
    int n;
    cout<<"ENTER THE SIZE OF ARRAY :";
    cin>>n;
    int a[n];
    cout<<"ENTER THE SORTED ELEMENTS :";
    for (int i = 0; i<n ; i++)
    {
        cin>>a[i];
    }
    int sum;
    cout<<"ENTER THE SUM :";
    cin>>sum;
    bool flag=pairsum(a,n,sum);
    if(flag==false)
    {
    cout<<flag;
    }
    return 0;
}
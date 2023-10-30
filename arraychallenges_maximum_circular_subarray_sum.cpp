#include<bits/stdc++.h>
using namespace std;
int kadanesalgorithm(int a[],int n)
{
    int currentsum=0;
    int maxSum=INT_MIN;
    for(int i=0 ; i<n ; i++)
    {
        currentsum+=a[i];
        if(currentsum<=0)
        {
            currentsum=0;
        }
        maxSum=max(maxSum,currentsum);
    }
    return maxSum;
}
int main()
{
    int n;
    cout<<"ENTER THE SIZE OF ARRAY :";
    cin>>n;
    int a[n];
    cout<<"ENTER TH ELEMENTS :";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int wrapsum=0;
    int nonwrapsum=kadanesalgorithm(a,n);
    int totalsum=0;
    for (int i = 0; i < n; i++)
    {
        totalsum+=a[i];
        a[i]=-a[i];
    }
    wrapsum= totalsum + kadanesalgorithm(a,n);
    cout<<"MAX SUM IS :"<<max(wrapsum,nonwrapsum);
    return 0;
}
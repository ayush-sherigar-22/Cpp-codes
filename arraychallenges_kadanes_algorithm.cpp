//KADANES algorithm
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n;
    cout<<"ENTER THE SIZE OF ARRAY :";
    cin>>n;
    int a[n];
    cout<<"ENTER THE ELEMENTS : ";
    for (int i=0; i <n;i++)    
    {
        cin>>a[i];
    }
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
    cout<<"THE MAXIMUM SUM OF SUBARRAY IS :"<<maxSum;
    return 0;
}
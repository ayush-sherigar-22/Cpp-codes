//addition of all elements of array and storing it in a variable
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER SIZE OF ARRAY:";
    cin>>n;
    int a1[n],a2[n],sum=0;
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
    for (int i = 0; i <n; i++)
    {
        
        sum=sum+a1[i]+a2[i];
    }
    cout<<"SUM IS :"<<sum;
    return 0;
}
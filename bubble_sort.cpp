#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"ENTER SIZE OF ARRAY:";
    cin>>n;
    int a[n];
    cout<<"ENTER ELEMENTS OF ARRAY:";
    for ( i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    
    int counter=0;
    while (counter<n-1)
    {
        for ( i = 0; i < n-counter-1; i++)
        {
            if(a[i]>a[i+1])
            {
                int temp;
                temp=a[i+1];
                a[i+1]=a[i];
                a[i]=temp;
            }
        }
        counter++;
    }
    cout<<"SORTED ARRAY IS: \n";
    for ( i = 0; i <n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"ENTER SIZE OF ARRAY :";
    cin>>n;
    int a[n];
    cout<<"ENTER ELEMENTS OF ARRAY:";
    for ( i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    
    for ( i = 0; i <n-1; i++)
    {
        for ( j = i+1; j <n; j++)
        {
            if(a[i]>a[j])
            {
                int temp;
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
        
        
    }
    cout<<"SORTED ARRAY IS: \n";
    for ( i = 0; i <n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
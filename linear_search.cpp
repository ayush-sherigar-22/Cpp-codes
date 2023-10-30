#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    bool flag=0;
    cout<<"ENTER SIZE OF ARRAY:";
    cin>>n;
    int a[n];
    cout<<"ENTER ELEMENTS OF ARRAY:";
    for ( i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    int key;
    cout<<"ENTER ELEMENT YOU WANT TO SEARCH:";
    cin>>key;
    for ( i = 0; i <n; i++)
    {
        if(a[i]==key)
        {
            cout<<"THE ELEMENT IS AT INDEX:"<<i;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"ELEMNET NOT PRESENT IN ARRAY:";
    }

    return 0;
}
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
    cout<<"ENTER ELEMENT YOU WANT TO SEARCH IN SORTED MANNER:";
    cin>>key;
    int s=0;
    int e=n;
    while (s<=e)
    {
        int mid=(s+e)/2;
        if (a[mid]==key)
        {
            cout<<"THE ELEMENT IS AT INDEX:"<<mid;
            flag=1;
            break;
        }
        else if(a[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
     if(flag==0)
    {
        cout<<"ELEMNET NOT PRESENT IN ARRAY:";
    }


    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[100]= "Apple";
    int i=0;
    while (arr[i]!='\0')
    {
        cout<<arr[i]<<"\n";
        i++;
    }
    char a[200];
    cout<<"ENTER THE ARRAY :";
    cin>>a;
    cout<<"ENTERED ARRAY IS:"<<a;
    int m;
    cout<<"\n ENTER THE INDEX :";
    cin>>m;
    cout<<a[m-1];
    return 0;
}
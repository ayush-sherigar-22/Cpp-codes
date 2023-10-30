#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"ENTER A NUMBER"<<"\n";
    cin>>n;
    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            cout<<" * ";
        }
        cout<<"\n";
    }
    int space = 2*n-2*i;
    for ( j = 1; j <=space; j++)
    {
        cout<<" * ";
    }
    for ( j = 1; j <=i; j++)
    {
        cout<<" * ";
        cout<<"\n";
    }
    
    return 0;

}
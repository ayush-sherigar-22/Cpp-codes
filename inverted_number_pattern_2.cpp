#include<iostream>
using namespace std;
int main()
{
    int i,j,n,b;
    cout<<"ENTER A NUMBER"<<"\n";
    cin>>n;
    for ( i = n; i >=1; i--)
    {
        b=1;
        for ( j = 1; j<=i; j++)
        {
            cout<<b<<" ";
            b=b+1;
        }
        cout<<"\n";
    }
    
    return 0;
}
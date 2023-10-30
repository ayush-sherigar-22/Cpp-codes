#include<iostream>
using namespace std;
int main()
{
    int i,j,n,b=1;
    cout<<"ENTER A NUMBER"<<"\n";
    cin>>n;
    for ( i = n; i >=1; i--)
    {
        for ( j = 1; j<=i; j++)
        {
            cout<<b<<" ";
            b=b+1;
        }
        cout<<"\n";
    }
    
    return 0;
}
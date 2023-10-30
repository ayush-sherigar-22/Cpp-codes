#include<iostream>
using namespace std;
int main()
{
    int i,j,n,b=1;
    cout<<"ENTER NUMBER OF ROWS"<<"\n";
    cin>>n;
    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            cout<<b<<" ";
            b=b+1;
        }
        cout<<"\n";
    }
    
    return 0;
}
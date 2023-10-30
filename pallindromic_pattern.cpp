#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"ENTER A NUMBER"<<"\n";
    cin>>n;
    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j <=n-i; j++)
        {
            cout<<"   ";
        }
        
        
        int b=i;
        
        for ( ; j <=n; j++)
        {
            cout<<b--<<"  ";
            
        }
        b=2;
        
        for ( ; j <=n+i-1; j++)
        {
            cout<<b++<<"  ";
            
        }
        cout<<"\n";
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,space;
    cout<<"ENTER NUMBER OF ROWS";
    cin>>n;
    for ( i = 1; i <=n; i++)
    {
        space=n-i;
        for ( j = 1; j<=space; j++)
        {
            cout<<" ";
        }
        
        for ( j= 1; j <=i; j++)
        {
            if (j==1 || j==n || i==n)
            {
                cout<<j<<"";
            }
            else
            {
                cout<<" ";
            }
        
        }
        cout<<"\n";
        
    }
    



    return 0;
}
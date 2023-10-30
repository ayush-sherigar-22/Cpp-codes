#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"ENTER NO. OF ROWS";
    cin>>n;
    for ( i = 1; i <=n; i++)
    {
       for ( j = 1; j <=i; j++)
       {
           if (j==1 || j==i || i==n)
           {
               cout<<j<<" ";
           }
           else
           {
               cout<<"  ";
           }
           
       }
       cout<<"\n";
    }
    
    
    
    return 0;



}
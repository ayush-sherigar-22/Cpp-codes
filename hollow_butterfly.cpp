#include<iostream>
using namespace std;
int main()
{
    int i,j,n,space;
    cout<<"ENTER NUMBER OF ROWS";
    cin>>n;
    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            if (j==1 || j==i)
            {
             cout<<"* ";   
            }
            else
            {
                cout<<"  ";
            }
            
            

        }
        space=2*n-2*i;
        for (j = 1; j <=space; j++)
        {
            cout<<"  ";
        }
        for ( j = 1; j <=i; j++)
        {
            
            if (j==1 || j==i)
            {
             cout<<"* ";   
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<"\n";
        
        
        
    }

    for ( i = n; i >=1; i--)
    {
        for ( j = 1; j <=i; j++)
        {
            if (j==1 || j==i)
            {
             cout<<"* ";   
            }
            else
            {
                cout<<"  ";
            }
            
            

        }
        space=2*n-2*i;
        for (j = 1; j <=space; j++)
        {
            cout<<"  ";
        }
        for ( j = 1; j <=i; j++)
        {
            
            if (j==1 || j==i)
            {
             cout<<"* ";   
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
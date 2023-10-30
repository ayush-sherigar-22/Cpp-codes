#include<iostream>
using namespace std;
int main()
{
    int i,j,n,space;
    cout<<"ENTER NUMBER OF ROWS \n";
    cin>>n;
    for ( i =1; i <=n; i++)
    {
        space=n-i;
        for ( j = 0; j <=space; j++)
        {
            cout<<"  ";
        }
        
        for ( j = 1; j <=n; j++)
        {
            if(j==1|| j==n || i==1 || i==n){
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
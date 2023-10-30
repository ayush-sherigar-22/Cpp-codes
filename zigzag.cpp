#include<iostream>
using namespace std;
int  main()
{
    int i,j,n;
    cout<<"ENTER NUMBER OF COLOUMNS";
    cin>>n;
    for ( i = 1; i <=2; i++)
    {
        for ( j = 1; j <=n; j++)
        {
             if (i==2 && j==n)
            {
                cout<<"   *";
            }
            if ((j+i)%2==0)
            {
                cout<<"   ";
            }
            else
            {
                cout<<"* ";
            }
            
        }
        cout<<"\n";
    }
    
    return 0;

}
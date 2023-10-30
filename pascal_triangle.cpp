#include<iostream>
using namespace std;

int fact(int a)
{
    int factorial=1;
    if(a==1 || a==0)
    {
        return factorial;
    }
    else 
    {
        for(int i=1;i<=a;i++)
        {
            factorial=factorial*i;
        }
        return factorial;
        
    }
  
}

int main()
{
    int n;
    cout<<"NO OF ROWS :";
    cin>>n;
    for ( int i = 0; i <=n; i++)
    {
        for (int j = 0; j <=i; j++)
        {   
            int k= i-j;
            cout<<fact(i)/(fact(j)*fact(k))<<"  ";
        }
        cout<<"\n";
    }
    


    return 0;
}
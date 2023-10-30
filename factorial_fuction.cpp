#include<iostream>
using namespace std;
int fact(int a)
{   
    int factorial=1;
    if(a==1 || a==0)
    {
        cout<<"FACTORIAL IS :\n"<<factorial;
    }
    else 
    {
        for(int i=1;i<=a;i++)
        {
            factorial=factorial*i;
        }
        cout<<"FACTORIAL IS : \n"<<factorial;
        
    }
    return 0;

}
int main()
{
    int m,n;
    cout<<"ENTER NOS";
    cin>>m>>n;
    fact(m);
    fact(n);
    return 0;
}
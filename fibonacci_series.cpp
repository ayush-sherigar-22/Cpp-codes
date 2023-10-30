#include<iostream>
using namespace std;
void fib(int n)
{
    int next,t1=0,t2=1;
    for (int i = 1; i<=n; i++)
    {
        cout<<t1<<" ";
        next=t1+t2;
        t1=t2;
        t2=next;      
        
    }
}
int main()
{   
    int n;
    cout<<"ENTER A NUMBER :";
    cin>>n;
    fib(n);
    

    return 0;
}
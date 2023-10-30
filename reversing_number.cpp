#include<iostream>
using namespace std;
int main()
{
    int r,n,q=0;
    cout<<"ENTER A NUMBER :";
    cin>>n;
    while (n>0)
    {
        r=n%10;
        q= q*10+r;
        n=n/10;
    }
    cout<<"REVERSE IS :"<<q;
    return 0;

}
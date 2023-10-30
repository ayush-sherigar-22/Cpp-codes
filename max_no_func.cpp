#include<iostream>
using namespace std;
int max(int n1,int n2,int n3)
{
    if(n1>n2 && n1>n3)
    {
        cout<<n1<<" IS MAX";
    }
    else if (n2>n3 && n2>n1)
    {
        cout<<n2<<" IS MAX";
    }
    else{
        cout<<n3<<" IS MAX";
    }
    return 0;
}
int main()
{
    int n1,n2,n3;
    cout<<"ENTER THREE NOS";
    cin>>n1>>n2>>n3;
    max(n1,n2,n3);

    return 0;
}
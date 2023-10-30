#include<iostream>
using namespace std;
int add(int a, int b)
{
    int sum;
    sum= a+b;
    cout<<"SUM IS "<<sum;
    return 0;

    
}
int main()
{
    int m,n;
    cout<<"ENETR TWO NOS :";
    cin>>m; cin>>n;
    add(m,n);
    return 0;
}
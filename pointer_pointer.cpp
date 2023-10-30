#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m=909;
    int *p=&m;
    cout<<*p<<endl;
    int **q=&p;
    cout<<*q<<endl;
    cout<<**q<<endl;
    **q=9;
    cout<<endl<<m<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=100;
    int *ptr;
    ptr=&a;
    cout<<ptr<<"\n";
    cout<<&a<<"\n";
    cout<<*ptr;
    *ptr=900;
    cout<<"\n"<<a;
    *ptr++;
    cout<<"\n"<<*ptr;
    char ch= 'd';
    char *cptr=&ch;
    cout<<"\n"<<cptr;
    cptr++;
    cout<<"\n"<<cptr;
    return 0;
}
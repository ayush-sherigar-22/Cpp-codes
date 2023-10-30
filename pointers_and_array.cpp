#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={10,20,30,};
    cout<<*a<<endl;
    int *arr=a;
    for (int i = 0; i < 3; i++)
    {
        cout<<*arr;
        cout<<*(a+i)<<endl;
        arr++;
    }
    
    return 0;
}
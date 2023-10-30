#include<bits/stdc++.h>
using namespace std;
void swap1(int *a , int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;


}
int main()
{
    int n=20,m=98;
    int *p=&m, *q=&n;
    swap1(p,q);
    cout<<n<<"  "<<m;
    swap1(&n,&m);
    cout<<endl<<n<<"  "<<m;
    return 0;
}
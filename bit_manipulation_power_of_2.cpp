#include<bits/stdc++.h>
using namespace std;
bool ispowerof2(int n)
{
    return (n && ! (n & n-1));
}
int main()
{
    cout<<ispowerof2(32);
    return 0;
}
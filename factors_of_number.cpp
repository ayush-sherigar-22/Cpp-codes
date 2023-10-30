#include<cmath>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER A NUMBER: ";
    cin>>n;
    cout<<"FACTORS OF NUMBER ARE: 1 ";
    for (int i = 2; i <=n; i++)
    {
        if(n%i==0)    
        {
            cout<<i<<" ";
        }
    

    }
     +
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER THE INDEX OF ARRAY :";
    cin>>n;
    char a[n+1];
    cout<<"ENTER THE WORD :";
    cin>>a;
    bool flag=1;
    for (int i = 0; i < n; i++)
    {
        if(a[i]!=a[n-1-i])
        {
            cout<<"GIVEN WORD ISN'T A PALINDROME.";
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"GIVEN WORD IS PALINDROME.";
    }


    return 0;
}
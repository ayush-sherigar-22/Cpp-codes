#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER A NUMBER :";
    cin>>n;
    int sum=0;
    int og=n;
    while (n>0)
    {
       int lastdigit= n%10;
       sum+=round(pow(lastdigit,3));
       n=n/10;
    }
    
    if(sum==og)
    {
        cout<<" GIVEN NUMBER IS A ARMSTRONG NUMBER";
    }
    else
    {
        cout<<" GIVEN NUMBER IS NOT A ARMSTRONG NUMBER";
    }
    return 0;
}
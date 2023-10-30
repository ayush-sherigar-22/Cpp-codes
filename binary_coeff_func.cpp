#include<iostream>
#include<math.h>
using namespace std;
int fact(int a)
{
 
    int factorial=1;
    if(a==1 || a==0)
    {
        return factorial;
    }
    else 
    {
        for(int i=1;i<=a;i++)
        {
            factorial=factorial*i;
        }
        return factorial;
        
    }
    

}   
int main()
{
    int k ,h,g;
    cout<<"ENTER VALUE FOR N & R";
    cin>>k>>h;
    g=k-h;
    int ans = fact(k)/(fact(g)*fact(h));
    cout<<"VALUE OF COMBINATION IS :"<<ans;
    return 0;

}
#include<iostream>
using namespace std;
int sum(int n)
{
    int ans=0;
    for (int i = 0; i <=n; i++)
    {
        ans+=i;
    }
    
    return ans;
}
int main()
{
    int n;
    cout<<"ENTER A NUMBER :";
    cin>>n;

    cout<<"SUM OF N NATURAL NUMBERS IS :"<<sum(n);
    return 0;

}
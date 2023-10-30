#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER SIZE OF ARRAY :";
    cin>>n;
    int a1[n]; char a2[n];
    cout<<"ENTER KIDS NAME AND NUMBER OF CANDIES HE/SHE HAS :";
    for (int i = 0; i < n; i++)
    {
        cin>>a2[i];
        cin>>a1[i];
    }
    int max=INT_MIN,a;
    for (int i = 0; i < n; i++)
    {
        if (max<a1[i])
        {
            max=a1[i];
            a=i;
        }
        else{
            continue;
        }
    }
    cout<<"KID WITH MAXIMUM CANDIES IS :"<<a2[a];
    cout<<"\n AND NUMBER OF CANDIES HE/SHE HAS IS :"<<a1[a];
    return 0;
}
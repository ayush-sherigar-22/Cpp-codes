#include<iostream>
using namespace std;

bool pythagorianCheck(int x,int y, int z)
{
    bool flag;
    int a=max(x,max(y,z));
    int b,c;
    if(a==x)
    {
        b=y;
        c=z;
    }
    else if (a==y)
    {
        b=x;
        c=z;
    }
    else
    {
        b=x;
        c=y;
    }
    if (a*a == b*b + c*c)
    {
           return flag=true;
    }
    
    else
     {
        return flag=false;
     }
    return flag;
}

int main()
{
    int x,y,z;
    cout<<"ENTER THREE NUMBERS : ";
    cin>>x>>y>>z;
    if(pythagorianCheck(x,y,z))
    {
        cout<<"GIVEN NUMBERS ARE A PYTHAGORIAN TRIPLET";

    }
    else
    {
         cout<<"GIVEN NUMBERS ARE NOT A PYTHAGORIAN TRIPLET";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int addition(int n1, int n2)
{
    int ans=0;
    ans=n1+n2;
    return ans;
}

int subtract(int n1, int n2)
{
    int ans=0;
    if (n1>n2)
    {
        ans=n1-n2;
    }
    else
    {
        ans=n2-n1;
    }
    
    
    return ans;
}

int division(float n1, float n2)
{
    float ans;
    ans=n1/n2;
    return ans;
}

int multiply(int n1, int n2)
{
    int ans=0;
    ans=n1*n2;
    return ans;
}

int main()
{
    int n1,n2,a;
    cout<<"ENTER TWO NUMBERS :";
    cin>>n1>>n2;
    cout<<"WHICH CALCULATION YOU WANT TO DO ? \n";
    cout<<"1.ADD \n 2.SUBTRACT \n 3.DIVIDE \n 4.MULTIPLY \n";
    cin>>a;
    switch (a)
    {
    case 1:
        cout<<"ADDITION IS : "<<addition(n1,n2);
        break;
    
    case 2:
        cout<<"SUBTRACTION IS : "<<subtract(n1,n2);
        break;
    
    case 3:
        cout<<"DIVISION IS : "<<division(n1,n2);
        break;
    
    case 4:
        cout<<"MULTIPLICATION IS : "<<multiply(n1,n2);
        break;
    
    default:
     
        cout<<"WRONG INPUT ";
        
        break;
        
    }
    return 0;
}
#include<iostream>
#include<cmath>
using namespace std;
int prime(int n)
{
    bool flag=0;
    for (int  i = 2; i <=round(sqrt(n)); i++)
    {
        if (n%i==0)
        {   
            cout<<n<<" IS NON-PRIME \n"; 
            flag=1;
            break;
        }
       
    }
    if (flag==0)
    {
        cout<<n<<" IS  PRIME \n"; 
  
    }
    
    return 0;
}
int main()

{
    int n1,n2,n3;
    cout<<"ENTER THREE NOS :";
    cin>>n1>>n2>>n3;
    prime(n1);
    prime(n2);
    prime(n3);
    return 0;
}
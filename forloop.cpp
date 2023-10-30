//factorial of num
#include<iostream>
using namespace std;
int main()
{
    int a,count=1;
    cout<<"INPUT A NUMBER";
    cin>>a;
    if (a==0)
        {
            cout<<"FACTORIAL IS : "<<count;
        }
    for(int i=1;i<=a;i++)
    {  
       count=i*count;
       
    }
    cout<<"FACTORIAL IS : "<<count;


    return 0;

}
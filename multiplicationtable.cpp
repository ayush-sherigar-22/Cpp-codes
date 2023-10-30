#include<iostream>
using namespace std;
int main()
{
    int a,count=1;
    cout<<"INPUT A NUMBER GREATER THAN 0 : ";
    cin>>a;
    cout<<"MULTIPLICATION TABLE IS : \n";

    for(int i=1;i<=12;i++)
    {  

            cout<<a<<" X "<<i<<" = "<<a*i<<"\n";  
    }
        return 0;

}
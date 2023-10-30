#include<iostream>
using namespace std;
int main()
{
    int a,count=0;
    cout<<"INPUT A NUMBER";
    cin>>a;
    for(int i=0;i<=a;i++)
    {  
       count=i+count;
       
    }
    cout<<"SUM IS : "<<count;


    return 0;

}
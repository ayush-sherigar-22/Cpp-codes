#include<iostream>
using namespace std;
int main()
{
    int a,count=0; 
    cout<<"ENTER NUMBER :"; cin>>a;
    while(a>=0)
    {
        count= count +a;
        cout<<"ENTER NUMBER :"; cin>>a;
        
    }
    cout<<"SUM IS : "<<count;

    return 0;
}
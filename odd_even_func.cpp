#include<iostream>
using namespace std;
void even(int n)
{
    if(n%2==0)
    {
        cout<<n<<" IS EVEN NUMBER";
    }
    else
    {
        cout<<n<<" IS ODD NUMBER";
    }
}
int  main()
{
    int n;
    cout<<"ENTER A NUMBER ";
    cin>>n;
    even(n);
    
    
    
    return 0;

}
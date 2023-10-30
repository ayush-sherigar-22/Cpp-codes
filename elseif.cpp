#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"HOW MUCH MONEY YOU HAVE?";
    cin>>a;
    
     if (500<a && a<1000)
    {
        cout<<"Eat burger and pizza";
    }
    
    else if (1000<a && a<2000)
    {
        cout<<"Eat a meal";
    }
    else if (a<500)
    {
        cout<<"cancel eating";
    }
    
    else
    {
        cout<<"Eat anything";
    }






    return 0;
}
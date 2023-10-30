#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{   
    string str;
    cout<<"ENTER A STRING :";
    getline(cin,str);
    //for upper case
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i] >='a' && str[i] <='z')
        {
            str[i]-=32;
        }
    }
    cout<<endl<<str<<endl;
    //for lower case
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i] >='A' && str[i] <='Z')
        {
            str[i]+=32;
        }
    }
    cout<<endl<<str<<endl;

    //by using in built function
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout<<"AFTER USING IN FUNCTION : "<<str<<endl;

    transform(str.begin(), str.end(), str.begin(), :: tolower);
    cout<<"AFTER USING IN FUNCTION : "<<str<<endl;
    
    return 0;
}
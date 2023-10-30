#include<iostream>
using namespace std;
int main()
{
    int a,i=0; string b;
    cout<<"How many times you want to display the text?";
    cin>>a;
    cout<<"enter text you want to dispaly :"; cin>>b;
    do {
        
        cout<<b<<" \n";
        i=1+i;
    
    } 
    while(i<a);
   
    return 0;
}
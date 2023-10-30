#include<bits/stdc++.h>
using namespace std;

int binarytodecimal(int n)
{
    int ans=0;
    int x=1;
    while(n>0)
    {
        int y=n%10;
        ans+=y*x;
        x*=2;
        n/=10;

    }
    return ans;
}

int octaltodecimal(int n)
{
   
    int ans=0;
    int x=1;
    while(n>0)
    {
        int y=n%10;
        ans+=y*x;
        x*=8;
        n/=10;

    }
    return ans;
 
}

int hexadecimaltodecimal(string w)
{
    int ans =0;
    int x=1;
    int s=w.size();
    cout<<s;
    for(int i=s-1; i>=0;i--)
    {
        if(w[i]>='0' && w[i]<='9')
        {
            ans+=x*(w[i]- '0');
        }
        else if (w[i]>='A' && w[i]<='F')
        {
            ans+=x*(w[i]-'A'+10);
        }
        x*=16;        
    }
    //here ascii/char value is used when 'A' or 'F' is written
    return ans;
}

int decimaltobinary(int n)
{
    int x=1;
    int ans=0;
    while (x<=n)
    {
        x*=2;
    }
     x/=2;
    
    while (x>0)
    {
        int lastdigit =n/x;
        n-=lastdigit*x;
        x/=2;
        ans=ans*10 +lastdigit;

    }
    return ans;
    
}

int decimaltooctal(int n)
{
    int x=1;
    int ans=0;
    while (x<=n)
    {
        x*=8;
    }
     x/=8;
    while (x>0)
    {
        int lastdigit =n/x;
        n-=lastdigit*x;
        x/=8;
        ans=ans*10 +lastdigit;

    }
    return ans;
    
}

string decimaltohexadecimal(int n)
{
    int x=1;
    string ans = "";
    while (x<=n)
    {
        x*=16;
    }
    x/=16;
    while (x>0)
    {
        int  lastdigit=n/x;
        n-=lastdigit*x;
        x/=16;
        if (lastdigit <=9)
        {
            
            ans= ans + to_string(lastdigit);
        }
        else
        {
            char c= 'A'+lastdigit-10;
            ans.push_back(c);
        }
        
    }
   return ans;
 
    
}

int main()
{
    int n;
   string w; //for hexdcimal to decimal
    int a;
    cout<<"WHICH CONVERSION YOU WANT TO DO? \n\n";
    cout<<"1. BINARY TO DECIMAL \n";
    cout<<"2. OCTAL TO DECIMAL \n";
    cout<<"3. HEXADECIMALTO DECIMAL \n";
    cout<<"4. DECIMAL TO BINARY \n";
    cout<<"5. DECIMAL TO OCTAL \n";
    cout<<"6. DECIMAL TO HEXADECIMAL \n\n";
    cout<<"YOUR CHOICE :";
    cin>>a; 
    cout<<"\n";
    switch (a)
    {
    case 1:
        cout<<"ENTER A BINARY NUMBER :";
        cin>>n;
        cout<<"BINARY TO DECIMAL IS :"<<binarytodecimal(n);
        break;

    case 2:
        cout<<"ENTER A OCTAL NUMBER :";
        cin>>n;
        cout<<"OCTAL TO DECIMAL IS :"<<octaltodecimal(n);
        break;
    case 3:
        cout<<"ENTER A HEXADECIMAL NUMBER :";
        cin>>n;
        cout<<"HEXADECIMAL TO DECIMAL IS :"<<hexadecimaltodecimal(w);
        break;

    case 4:
        cout<<"ENTER A DECIMAL NUMBER :";
        cin>>n;
        cout<<"DECIMAL TO BINARY IS :"<<decimaltobinary(n);
        break;   
    case 5:
        cout<<"ENTER A DECIMAL NUMBER :";
        cin>>n;
        cout<<"DECIMAL TO OCTAL IS :"<<decimaltooctal(n);
        break;
    case 6:
        cout<<"ENTER A DECIMAL NUMBER :";
        cin>>n;
        cout<<" DECIMAL TO HEXADECIMAL IS :"<<decimaltohexadecimal(n);   
        break;

    default:
        cout<<"WRONG INPUT";
        break;
    }

   return 0;
}
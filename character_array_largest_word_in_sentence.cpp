#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER THE INDEX IF OF ARRAY :";
    cin>>n;
    cin.ignore();
    char a[n+1];
    cout<<"ENTER THE ARRAY :";
    cin.getline(a,n);
    int i=0;
    int currlen=0, maxlen=0;
    int start=0,maxst=0;
     while (1)
     {
        if(a[i]==' ' || a[i]=='\0')
        {
            if(currlen>maxlen)
            {
                maxlen=currlen;
                maxst=start;
            }
            currlen=0;
            start=i+1;
        }
        else 
        {
          currlen++;
        }
        if(a[i] =='\0')
        {
             break;
        }
        i++;
     }
    cout<<"MAX LENGTH IS OF LARGESTWORD IS : "<<maxlen; 
    cout<<"\n THE WORD IS :";
    for (int i = 0; i <maxlen; i++)
    {
        cout<<a[i+maxst];
    }
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1;
    cout<<"ENTER A STRING :";
    getline(cin,str1);
    int freq[26];

    for (int i = 0; i < 26; i++)
    {
        freq[i]=0;
    }
    for (int i = 0; i < str1.size(); i++)
    {
        freq[str1[i]-'a']++;
    }
    char ans='a';
    int maxF=0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i]>maxF)
        {
            maxF=freq[i];
            ans=i+'a';
        }
        
    }
    cout<<"MAX RECURRING LETTER IS :"<<ans<<"  AND FREQUENCY IS :"<<maxF;
        
    
    
    return 0;
}
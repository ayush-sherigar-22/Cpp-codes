#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str1,str2;
    cout<<"ENTER A NUMERIC STRING :";
    getline(cin,str1);
    sort(str1.begin(), str1.end(), greater<int>());
    cout<<"GREATEST NUMBER IS :"<<str1<<endl;
    
    return 0;
}
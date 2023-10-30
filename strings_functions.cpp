//#include<bits/stdc++.h>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string str1, str2;
    str1="ayush ";
    str2="sherigar";
    cout<<str1+str2+str1;   //append without changing the actual value
    str1.append(str2);  //append
    cout<<endl<<endl<<str1;
    cout<<endl<<str1[11];  //acesssing a particular character
    str1.clear();  //clear a string
    cout<<endl<<str1;
    cout<<endl<<str2.compare(str1)<<endl;     //compare a string
    string str3="abc";
    string str4="abc";
    if(!str3.compare(str4))
    {
        cout<<"STRINGS ARE EQUAL ";
    }
    cout<<endl<<str4;
    str4.clear();
    if(str4.empty())  //check whether string is empty
    {
        cout<<endl<<"STRING IS EMPTY.";
    }
    str2.erase(2, 3); //erase a part in shift the remaining the string
    cout<<endl<<str2;
    cout<<endl<<str2.find("gar"); //find a function
    str2.insert(2,"eri"); //insert a given part
    cout<<endl<<str2;
    cout<<endl<<str2.size()<<endl;  //either use size or length
    for (int i = 0; i < str2.length(); i++)
    {
        cout<<str2[i]<<endl;
    }
    cout<<str2.substr(2,3)<<endl;
    string str5="7634";  
    int x=stoi(str5);   //string to int 
    cout<<x+90<<endl;
    int b=9998;
    cout<<b<<endl<<to_string(b)+'3'<<endl;   //int to string
    sort(str2.begin(),str2.end()); //sort the string 
    cout<<endl<<str2;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"ENTER THE NUMBER OF SIZE OF MATRIX :";
    cin>>n1>>n2>>n3;
    int a1[n1][n2];
    int a2[n2][n3];
    cout<<"ENTER THE ELEMENTS OF FIRST MATRIX :";
    
    for (int i = 0; i <n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin>>a1[i][j];
        }
        
    }

    
    cout<<"ENTER THE ELEMENTS OF SECOND MATRIX :";
    
    for (int i = 0; i <n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin>>a2[i][j];
        }
        
    }
    int a3[n1][n3];

    for (int i = 0; i <n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            a3[i][j]=0;
        }
        
    }

    for (int i = 0; i <n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                a3[i][j]+= a1[i][k]*a2[k][j]; 
                
            }
            
        }
        
    }

    cout<<"THE MULTIPLIED MATRIX IS : \n ";
    
    for (int i = 0; i <n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout<<a3[i][j]<<" ";
            
        }
        cout<<"\n";
        
    }
    return 0;

// 2 4 1 2 8 4 3 6 1 7 9 5

// 1 2 3 4 5 6 7 8 9 4 5 6
}
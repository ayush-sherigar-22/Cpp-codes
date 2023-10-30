#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"ENTER THE NUMBER OF ROWS AND COLOUMNS OF MATRIX :";
    cin>>n>>m;
    int a[n][m];
    cout<<"ENTER SORTED MATRIX :";
    for (int i = 0; i < n; i++)
    {
        for ( int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
        
    }
    int key;
    cout<<"ENTER THE ELEMENT YOU WANT TO SEARCH :";
    cin>>key;
    int row=0, coloumn=m-1;
    bool flag=0;
    while (row<=n|| coloumn>=0)
    {
        if(a[row][coloumn]==key)
        {
            cout<<"ELEMENT IS AT : ("<<row+1<<","<<coloumn+1<<")";
            flag=1;
            break;
        }
        else if(a[row][coloumn]>key)
        {
            coloumn--;
        }
        else
        {
            row++;
        }
    }
    if(flag==0)
    {
        cout<<"ELEMENT NOT FOUND.";
    }
    return 0;
}
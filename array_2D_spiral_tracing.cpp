#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"ENTER THE NUMBER OF ROWS AND COLOUMNS :";
    cin>>n>>m;
    int a[n][m];
    cout<<"ENTER THE ELEMENTS :";
    
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
        
    }
    cout<<"THE MATRIX IS : \n ";
    
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<a[i][j]<<" ";
            
        }
        cout<<"\n";
        
    }

    int row_start=0 , row_end=n-1 , coloumn_start=0 , coloumn_end=m-1;
    cout<<" SPIRALLY TRAVESED MATRIX IS : \n";

    while (row_start<=row_end || coloumn_start<=coloumn_end)
    {
        //for coloumn start to coloumn end
        for (int col = coloumn_start ; col <=coloumn_end ; col++)
        {
            cout<<a[row_start][col]<<" ";
        }
        row_start++;
        cout<<"\n";
        
        //for row start to row end
        for (int row = row_start ; row <= row_end ; row++)
        {
            cout<<a[row][coloumn_end]<<" ";
        }
        coloumn_end--;
        cout<<"\n";
        
        //for coloumn end to coloumn start
        for (int col = coloumn_end ; col >=coloumn_start ; col--)
        {
            cout<<a[row_end][col]<<" ";
        }
        row_end--;
        cout<<"\n";

        //for row end to start
        for (int row = row_end ; row >= row_start ; row--)
        {
            cout<<a[row][coloumn_start]<<" ";
        }
        coloumn_start++;
        cout<<"\n";
        
    }
    
    return 0;
}
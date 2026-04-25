#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];

    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j<m ; j++)
        {
            int no;
            cin>>no;
            arr[i][j] = no;
        }
    }

    for(int i = 0 ; i<1 ; i++)
    {
        for(int j = 0 ; j<m ; j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
    for(int j = m-1 ; j > m-2 && j>=0; j--)
    {
        for(int i = 1 ; i<n ; i++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
    for(int i = n-1 ; i>n-2 && i>0 ; i--)
    {
        for(int j = m-2 ; j>=0 ; j--)
        {
            cout<<arr[i][j]<<" ";
        }
    }
    for(int j = 0 ; j<1 ; j++)
    {
        for(int i = n-2 ; i>0 ; i--)
        {
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;
    return 0;
}


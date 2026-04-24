#include<iostream>
using namespace std;
int main()
{
    int n , m ;
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
    bool uptodown = true;
    for(int j = 0 ; j<m ; j++)
    {
        if(uptodown)
        {
            for(int i = 0 ; i<n ; i++)
            {
                cout<<arr[i][j]<<" ";
            }
            uptodown=false;
        }
        else if(!uptodown)
        {
            for(int i = n-1 ; i>=0 ; i--)
            {
                cout<<arr[i][j]<<" ";
            }
            uptodown = true;
        }
    }

    return 0;
}
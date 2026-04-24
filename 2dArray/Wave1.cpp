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
    bool lefttoright = true;
    for(int j = 0 ; j<n ; j++)
    {
        if(lefttoright)
        {
            for(int i = 0 ; i<m ; i++)
            {
                cout<<arr[j][i]<<" ";
            }
            lefttoright=false;
        }
        else if(!lefttoright)
        {
            for(int i = m-1 ; i>=0 ; i--)
            {
                cout<<arr[j][i]<<" ";
            }
            lefttoright = true;
        }
    }

    return 0;
}
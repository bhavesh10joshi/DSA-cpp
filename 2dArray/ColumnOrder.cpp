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

    for(int j = 0 ; j<m ; j++)
    {
        for(int i = 0 ; i<n ; i++)
        {
            cout<<arr[i][j]<<" ";
        }
    }


    return 0;
}
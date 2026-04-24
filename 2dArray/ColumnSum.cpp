#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    int n , m;
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

    for(int i = 0 ; i<m ; i++)
    {
        int sum = 0;
        for(int j = 0 ; j<n ; j++)
        {
            sum = sum + arr[j][i];
        }
        cout<<sum<<" ";
    }
    return 0;
}
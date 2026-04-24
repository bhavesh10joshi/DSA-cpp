#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int max = INT_MIN;
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
            if(no >= max)
            {
                max = no;
            }
        }
    }

    cout<<max<<endl;

    return 0;
}
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    int n , m;
    vector<int>ans;
    cin>>n>>m;
    int arr[n][m];

    for(int i = 0 ; i<n ; i++)
    {
        int min = INT_MAX;
        for(int j = 0 ; j<m ; j++)
        {
            int no;
            cin>>no;
            arr[i][j] = no;
            if(no<=min)
            {
                min = no;
            }
        }
        ans.push_back(min);
    }

    for(int i = 0 ; i<ans.size() ; i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
#include<iostream>
#include<climits>
using namespace std;
#include<vector>
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    vector<int>ans;
    for(int i = 0 ; i<n ; i++)
    {
        int count = 0;
        for(int j = 0 ; j<m ; j++)
        {
            int no;
            cin>>no;
            arr[i][j] = no;
            if(no == 1)
            {
                count++;
            }
        }
        ans.push_back(count);
    }
    int location = -1 , max = INT_MIN;
    for(int i = 0 ; i<ans.size() ; i++)
    {
        if(ans[i]>max && ans[i]!=0)
        {
            location=i;
            max=ans[i];
        }
    }
    cout<<location<<endl;
    return 0;
}
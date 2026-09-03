#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<vector<int>>vec;
    int n,m;
    cin>>n>>m;

    for(int i = 0 ; i<n ; i++)
    {
        vector<int>row;
        for(int j = 0 ; j<m ; j++)
        {
            int no;
            cin>>no;
            row.push_back(no);
        }
        vec.push_back(row);
    }

    // Brute Force Approach
    vector<vector<int>>ans;
    sort(vec.begin() , vec.end());
    
    for(int i = 0 ; i<vec.size() ; i++)
    {
        if(!ans.empty() && ans[ans.size()-1][1] >= vec[i][0])
        {
            continue;
        }
        for(int j = i+1 ; j<vec.size() ; j++)
        {
            if(vec[i][1] >= vec[j][0])
            {
                ans.push_back({vec[i][0], max(vec[i][1] , vec[j][1])});
            }
            else 
            {
                break;
            }
        }
    }
    
    return 0;
}
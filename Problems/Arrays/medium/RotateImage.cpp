#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<vector<int>>vec;

    for(int i = 0 ; i<n ; i++)
    {
        vector<int>arr;
        for(int j = 0 ; j<m ; j++)
        {
            int no;
            cin>>no;
            arr.push_back(no);
        }
        vec.push_back(arr);
    }

    // // Brute force Approach
    // vector<vector<int>>ans(vec.size() , vector<int>(vec[0].size() , 0));
    // for(int i = 0 ; i<vec.size() ; i++)
    // {
    //     for(int j = 0 ; j<vec[i].size() ; j++)
    //     {
    //         ans[j][(vec.size()-1)-i] = vec[i][j];
    //     }
    // }
    // for(int i = 0 ; ans.size() ; i++)
    // {
    //     for(int j = 0 ; j<ans[i].size() ; j++)
    //     {
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // Optimal Approach
    for(int i = 0 ; i<vec.size() ; i++)
    {
        for(int j = i+1 ; j<vec[0].size() ; j++)
        {
            swap(vec[i][j] , vec[j][i]);
        }
    }
    for(int i = 0 ; i<vec.size() ; i++)
    {
        reverse(vec[i].begin() , vec[i].end());
    }
    for(int i = 0 ; vec.size() ; i++)
    {
        for(int j = 0 ; j<vec[i].size() ; j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
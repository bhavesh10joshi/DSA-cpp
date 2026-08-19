#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    vector<int>vec;
    int n;
    cin>>n;

    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;
        vec.push_back(no);
    }

    // Brute Force Approach
    // int maxel = INT_MIN;
    // int profit = 0;

    // for(int i = 0 ; i<vec.size() ; i++)
    // {
    //     for(int j = i+1 ; j<vec.size() ; j++)
    //     {
    //         maxel=max(maxel,vec[j]);
    //     }
    //     profit = max(profit,vec[i]-maxel);
    // }

    // Optimal Approach
    int mini = vec[0];
    int profit = 0;
    for(int i = 1 ; i<vec.size() ; i++)
    {
        profit = max(profit , vec[i]-mini);  
        mini=min(mini,vec[i]);      
    }
    return 0;
}
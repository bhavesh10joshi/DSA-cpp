#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    vector<int>vec;

    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;
        vec.push_back(no);
    }

    // Brute Force Approach
    // vector<int>ans;
    // int rep =  -1;
    // for(int i = 0 ; i<vec.size() ; i++)
    // {
    //     for(int j = i+1 ; j<vec.size() ; j++)
    //     {
    //         if(vec[i] == vec[j])
    //         {
    //             rep = vec[i];
    //             break;
    //         }
    //     }        
    // }

    // int sum = (vec.size()*(vec.size()+1))/2;

    // for(int i = 0 ; i<vec.size() ; i++)
    // {
    //     sum = sum-vec[i];
    // }

    // ans.push_back(rep);
    // ans.push_back(sum+rep);

    // for(int j = 0 ; j<ans.size() ; j++)
    // {
    //     cout<<ans[j]<<" ";
    // }

    // Better Approach
    unordered_map<int,int>mp;
    vector<int>ans;
    int sum = (vec.size()*(vec.size()+1))/2;
    int rep = -1;
    for(int i = 0 ; i<vec.size() ; i++)
    {
        sum = sum-vec[i]; 
        mp[vec[i]]++;
        if(mp[vec[i]]>1)
        {
            rep = vec[i];
        }
    }
    ans.push_back(rep);
    ans.push_back(sum+rep);
    return 0;
}
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>vec;

    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;
        vec.push_back(no);
    }

    // Brute Force Approach
    // vector<int>rm;
    // for(int i = 0 ; i<vec.size() ; i++)
    // {
    //     bool isGreater = false;
    //     for(int j = i + 1 ; j<vec.size() ; j++)
    //     {
    //         if(vec[i]<vec[j])
    //         {
    //             isGreater = true;
    //             break;
    //         }
    //     }
    //     if(!isGreater || i==vec.size()-1)
    //     {
    //         rm.push_back(vec[i]);
    //     }
    // }
    // for(int i = 0 ; i<rm.size() ; i++)
    // {
    //     cout<<rm[i]<<" ";
    // } 
    // cout<<endl;

    // Optimal Approach
    int Max = INT_MIN;
    vector<int>rm;
    for(int i = vec.size()-1 ; i>=0 ; i--)
    {
        if(vec[i]>=Max)
        {
            rm.push_back(vec[i]);
        }
        Max = max(Max , vec[i]); 
    }
    for(int i = 0 ; i<rm.size() ; i++)
    {
        cout<<rm[i]<<" "<<endl;
    }

    return 0;
}
#include<iostream>
#include<algorithm>
#include<limits>
#include<vector>
#include<map>
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
    // for(int i = 0 ; i<vec.size() ; i++)
    // {
    //     bool found = false;
    //     for(int j = 0 ; j<vec.size() ; j++)
    //     {
    //         if(vec[i] == vec[j] && i != j)
    //         {
    //             found = true;
    //             break;
    //         }
    //     }
    //     if(!found)
    //     {
    //         cout<<vec[i]<<" : Found"<<endl;
    //         break;
    //     }
    // }

    // better Approach
    // Using hashing(array)
    
    // int Max = 0;
    // for(int i = 0 ; i<vec.size() ; i++)
    // { 
    //     Max = max(Max , vec[i]);
    // }

    // vector<int>arr(Max , 0);

    // for(int i = 0 ; i<vec.size() ; i++)
    // {
    //     arr[vec[i]]++;
    // } 

    // for(int i = 0 ; i<vec.size() ; i++)
    // {
    //     if(arr[vec[i]] == 1)
    //     {
    //         cout<<"Found : "<<vec[i]<<endl;
    //         break;
    //     }
    // }

    // using maps
    // map<int , int>mpp;

    // for(int i = 0 ; i<vec.size() ; i++)
    // {
    //     mpp[vec[i]]++;
    // }

    // for(auto it : mpp)
    // {
    //     if(it.second == 1)
    //     {
    //         cout<<"Found : "<<it.first<<endl;
    //         break;
    //     }
    // }

    // Optimized Approach
    // using XOR
    // int ans = 0;

    // for(int i = 0 ; i<vec.size() ; i++)
    // {
    //     ans = ans^vec[i];
    // }

    // cout<<"Found : "<<ans<<endl;

    return 0;
}
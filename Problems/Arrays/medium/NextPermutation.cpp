#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// Brute Force Function
// void Recursion(vector<vector<int>>&ans , vector<int>&arr , vector<int>&ds , vector<int>&vec)
// {
//     if(ds.size() == vec.size())
//     {
//         ans.push_back(ds);
//         return;
//     }
//     for(int i = 0 ; i<vec.size() ; i++)
//     {
//         if(!arr[i])
//         {
//             arr[i] = 1;
//             ds.push_back(vec[i]);
//             Recursion(ans , arr , ds , vec);
//             ds.pop_back();
//             arr[i]=0;
//         }
//     }
// }
int main()
{
    int n;
    vector<int>vec;
    cin>>n;

    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;
        vec.push_back(no);
    }

    // Brute force Approach
    // vector<int>arr(vec.size() , 0);
    // vector<vector<int>>ans;
    // vector<int>ds;

    // Recursion(ans , arr , ds , vec);
    
    // bool found = false;
    // if(ans[ans.size()-1] == vec)
    // {
    //     cout<<"Found : ";
    //     for(int i = 0 ; i<ans[0].size() ; i++)
    //     {
    //         cout<<ans[0][i]<<" ";
    //     }
    //     cout<<endl;
    //     found = true;
    // }
    // if(!found)
    // {
    //     int index = -1;
    //     for(int i = 0 ; i<ans.size() ; i++)
    //     {
    //         if(ans[i] == vec)
    //         {
    //             index = i+1;
    //         }
    //     }
    //     cout<<"Found : ";
    //     for(int i = 0 ; i<ans[index].size() ; i++)
    //     {
    //         cout<<ans[index][i]<<" ";
    //     }
    //     cout<<endl;
    // }
    // Optimal Approach
    // Step 1 = Find Break Point
    int index = -1;
    for(int i = vec.size()-2 ; i>=0 ; i--)
    {
        if(vec[i+1]>vec[i])
        {
            index=i;
            break;
        }
    } 
    if(index == -1)
    {
        reverse(vec.begin() , vec.end());
    }
    for(int i = vec.size()-1 ; i>index ; i--)
    {
        if(vec[i]>vec[index])
        {
            swap(vec[i] , vec[index]);
            break;
        }
    }
    reverse(vec.begin()+index+1 , vec.end());
    for(int i = 0 ; i<vec.size() ; i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    return 0;
}
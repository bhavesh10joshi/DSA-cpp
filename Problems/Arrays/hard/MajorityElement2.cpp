#include<vector>
#include<map>
#include<iostream>
using namespace std;
int main()
{
    vector<int>nums;
    int n1;
    cin>>n1;

    for(int i = 0 ; i<n1 ; i++)
    {
        int no;
        cin>>no;
        nums.push_back(no);
    }

    // Brute Force 
    // vector<int>ans;
    // int n = nums.size(); 
    // for(int i = 0 ; i<nums.size() ; i++)
    // {
    //     int count = 1;
    //     for(int j = 0 ; j<nums.size() ; j++)
    //     {
    //         if(i == j)
    //         {
    //             continue;
    //         }
    //         else
    //         {
    //             if(nums[j] == nums[i])
    //             {
    //                 count++;
    //                 nums.erase(nums.begin()+j);
    //                 j--;
    //             }
    //         }
    //     }
    //     if(count>(n/3))
    //     {
    //         ans.push_back(nums[i]);
    //     }
    //     nums.erase(nums.begin()+i);
    //     i--;
    // }

    // Better Approach
    // map<int,int>mpp;
    // vector<int>ans;
    // for(int i = 0 ; i<nums.size() ; i++)
    // {
    //     if(mpp[nums[i]]>(nums.size()/3))
    //     {
    //         continue;
    //     }
    //     mpp[nums[i]]++;
    //     if(mpp[nums[i]]>(nums.size()/3))
    //     {
    //         ans.push_back(nums[i]);
    //     }
    // }

    // Optimal Approach
    vector<int>ans;
    int cnt1 = 0 , cnt2 = 0 , el1 = 0 , el2 = 0;
    for(int i = 0 ; i<nums.size() ; i++)
    {
        if(cnt1 == 0 && nums[i] != el2)
        {
            cnt1 = 1 ;
            el1 = nums[i];
        }
        else if(cnt2 = 0 && nums[i] != el1)
        {
            cnt2 = 1 ; 
            el2 = nums[i];
        }
        else if(nums[i] == el1)
        {
            cnt1++;
        }
        else if(nums[i] == el2) cnt2++;
        else
        {
            cnt1--;
            cnt2--;
        }
    }
    ans.push_back(el1);
    ans.push_back(el2);
    
    return 0; 
}
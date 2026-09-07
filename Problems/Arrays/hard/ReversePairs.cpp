#include<iostream>
#include<vector>
using namespace std;
int Sort(vector<int>&vec , int low , int high)
{
    int count = 0;
    int mid = (low + high)/2;
    if(low>=high)
    {
        return count;
    }
    count += Sort(vec , low , mid);
    count += Sort(vec , mid + 1 , high);
    count += pairs(vec , high , low , mid);
    merge(low , mid , high , vec);
    return count ;
}
int pairs(vector<int>&vec , int high , int low , int mid)
{
    int count = 0;
    int right = mid + 1;
    for(int i = low ; i<=mid ; i++)
    {
        while(right<=high && vec[i]>vec[right]*2)
        {
            right++;
        }
        count += (right-(mid+1));
    }
    return count;
}
void merge(int low , int mid , int high , vector<int>&vec)
{
    int left = low;
    int right = mid + 1;

    vector<int>temp;
    while(left<=mid && right<=high)
    {
        if(vec[left]>=vec[right])
        {
            temp.push_back(vec[right]);
            right++;
        }
        else
        {
            temp.push_back(vec[left]);
            left++; 
        }
    }
    while(left<=mid)
    {
        temp.push_back(vec[left]);
        left++;
    }
    while(right<=high)
    {
        temp.push_back(vec[right]);
        right++;
    }
    for(int i = low ; i<=high ; i++)
    {
        vec[i] = temp[i-low];
    }
}
int main()
{
    int n;
    vector<int>vec;

    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;
        vec.push_back(no);
    }

    // Brute force Approach
    // int count = 0;
    // for(int i = 0 ; i<vec.size() ; i++)
    // {
    //     for(int j = i+1 ; j<vec.size() ; j++)
    //     {
    //         if(vec[i] > 2*vec[j])
    //         {
    //             count++;
    //         }
    //     }
    // }

    // Optimal using merge sort
    
    return 0;
}
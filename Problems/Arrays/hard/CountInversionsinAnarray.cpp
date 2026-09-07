#include<iostream>
#include<vector>
using namespace std;
int merge(vector<int>&vec , int high , int mid , int low)
{
    int count = 0;
    int left = low;
    int right = mid+1;
    vector<int>temp;
    while(left<=mid && right<=high)
    {
        if(vec[left]>vec[right])
        {
            count = count + ((mid-left)+1);
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
    return count;
}
int Sort(vector<int>&vec , int high , int low)
{
    int count = 0;
    int mid = (high + low)/2;

    if(low>=high)
    {
        return count;
    }
    count = count + Sort(vec , mid , low);
    count = count + Sort(vec , high , mid+1);
    count = count + merge(vec , high , mid , low);
    return count;
}
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

    // Brute force;
    // int cnt = 0;
    // for(int i = 0 ; i<vec.size() ; i++)
    // {
    //     for(int j = i+1 ; j<vec.size() ; j++)
    //     {
    //         if(vec[i]>=vec[j])
    //         {  
    //             cnt++ ;
    //         }
    //     }
    // }
    // cout<<cnt<<endl;

    // Using merge Sort
    cout<<Sort(vec , vec.size()-1 , 0)<<endl;
    return 0;
}
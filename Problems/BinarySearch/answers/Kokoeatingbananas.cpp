#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<cmath>
using namespace std;
int maximum(vector<int>&vec)
{
    int maxi = INT_MIN;
    for(int i = 0 ; i<vec.size() ; i++)
    {
        maxi = max(maxi , vec[i]);
    }
    return maxi;
} 
int TimeTaken(vector<int>&vec , int n)
{
    int total = 0;
    for(int i = 0 ; i<vec.size() ; i++)
    {
        total = total + ceil(vec[i]/n);
    }
    return total;
}
int main()
{
    int n;
    cin>>n;

    vector<int>piles;
    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;
        piles.push_back(no);
    }

    int h;
    cin>>h;

    // Brute force
    // int max = maximum(piles),ans=-1;

    // for(int i = 1 ; i<=max ; i++)
    // {
    //     int time = TimeTaken(piles,i);
    //     if(time<=h)
    //     {
    //         ans = i;
    //     }
    // }
    // cout<<ans<<endl;
    
    // optimal approach
    int max = maximum(piles);
    int low = 0 , high = max;

    while(low<=high)
    {
        int mid = (low+high)/2;
        int val = TimeTaken(piles,mid);
        if(val>=h)
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    cout<<low<<endl;
    return 0;
}
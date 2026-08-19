#include<iostream>
#include<map>
#include<vector>
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
    int sum;
    cin>>sum;

    // Using Brute Force Approach
    // int len = 0;
    // for(int i = 0 ; i<n ; i++)
    // {
    //     int s = 0;
    //     for(int j = i ; j<n ; j++)
    //     { 
    //         s = s + vec[j];
    //         if(s == sum)
    //         {
    //             len = max(len , j-i+1); 
    //         }
    //     }
    // }
    // cout<<"Maximum subarray Length is : "<<len<<endl;
    
    // Better Approach 
    map<int,int>mpp;
    int len = 0 , k = 0;

    for(int i = 0 ; i<vec.size() ; i++)
    {
        k = k + vec[i];
        if(k == sum)
        {
            len = max(len,i+1); 
        }
        int rem = k - sum;
        if(mpp.find(rem) != mpp.end())
        {
            len = max(len , i - mpp[rem]);
        }
        if(mpp.find(k) == mpp.end())
        {
            mpp[k] = i;
        }
    }
    cout<<"Maximum length is : "<<len<<endl;


    //Optimal approach
    // int i = 0 , j = 0 , k = 0 , len = 0;
    // while(i<=j && j<vec.size())
    // {
    //     while(k>sum && i<=j)
    //     {
    //         k=k-vec[i];
    //         i++;
    //     }
    //     k = k + vec[j];
    //     if(k == sum)
    //     {
    //         len = max(len , j-i+1);
    //     }
    //     j++;
    // } 
    
    // cout<<"Maximum length is "<<len<<endl;
    return 0;
}
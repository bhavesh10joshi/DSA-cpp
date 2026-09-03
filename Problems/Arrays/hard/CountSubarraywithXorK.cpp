#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
    vector<int>vec;
    int no;
    cin>>no;

    for(int i = 0 ; i<no ; i++)
    {
        int n;
        cin>>n;
        vec.push_back(n);
    }

    int k;
    cin>>k;

    // Brute force Approach
    
    // int cnt = 0;
    
    // for(int i = 0 ; i<vec.size() ; i++)
    // {
    //     int val = vec[i];
    //     for(int j = i+1 ; j<vec.size() ; j++)
    //     {
    //         val = val^vec[i];
    //         if(val == k)
    //         {
    //             cnt++;
    //         }
    //     }
    // }
    // cout<<cnt<<endl;

    // Optimal Approach
    unordered_map<int,int>mpp;
    int x = 0 , count = 0 ;

    for(int i = 0 ; i<vec.size() ; i++)
    {
        x = x^vec[i];
        if(x == k)
        {
            count++;
        }
        if(mpp.find(x) != mpp.end())
        {
            count = count + mpp[x];
        }
        if(mpp.find(x) == mpp.end())
        {
            mpp[x]++;
        }
    }
    
    cout<<"Ans is : "<<count<<endl;
    return 0;
}
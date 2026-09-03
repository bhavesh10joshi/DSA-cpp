#include<iostream>
#include<vector>
#include<unordered_map>
#include<climits>
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

    // Optimal Approach
    unordered_map<int,int>mpp;
    int sum = 0 ;
    int length = INT_MIN;
    for(int i = 0 ; i<vec.size() ; i++)
    {
        sum = sum + vec[i];
        if(sum == 0)
        {
            length = max(length , i+1);
        }        
        if(mpp.find(sum) != mpp.end())
        {
            length = max(length , i - mpp[sum]);
        }
        if(mpp.find(sum) == mpp.end())
        {
            mpp[sum] = i;
        }
    }

    return 0;
}
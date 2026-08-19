#include<iostream>
#include<vector>
using namespace std;
// Optimized approach Function
void Reversal(vector<int>&vec , int high , int low)
{
    while(high>=low)
    {
        swap(vec[high] , vec[low]);
        high--;
        low++;
    }
}
int main()
{
    vector<int>vec;
    int n;
    cin>>n;

    for(int i = 0 ; i<n ; i++){
        int no;
        cin>>no;
        vec.push_back(no);
    }

    int k;
    cin>>k;
    // // Brute Force approach
    
    // for(int i = 0 ; i<k ; i++)
    // {
    //     int last = vec[vec.size()-1];
    //     for(int j = vec.size()-1 ; j>=1 ; j--)
    //     {
    //         vec[j] = vec[j-1];
    //     }
    //     vec[0] = last;
    // }

    // for(int i = 0 ; i<n ; i++){
    //     cout<<vec[i]<<" ";
    // }

    // Better Approach
    // vector<int>nums(vec.size() , 0);

    // for(int i = 0 ; i<n ; i++)
    // {
    //     nums[(i+k)%(vec.size())] = vec[i];
    // }
    // vec=nums;
    // for(int i = 0 ; i<vec.size() ; i++){
    //     cout<<vec[i]<<" ";
    // }

    // Optimized approach
    if(k>=vec.size())
    {
        k = k%vec.size();
    }
    Reversal(vec , k , 0);
    Reversal(vec , vec.size()-1 , k+1);
    Reversal(vec , vec.size()-1 , 0);

    for(int i = 0 ; i<n ; i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}
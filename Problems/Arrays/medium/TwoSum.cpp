#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
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

    int k;
    cin>>k;

    // Brute force approach
    // bool found = false;
    // for(int i = 0 ; i<n ; i++)
    // {
    //     for(int j = 0 ; j<n ; j++)
    //     {
    //         if(i == j)
    //         {
    //             continue;
    //         }
    //         if(vec[i] + vec[j] == k)
    //         {
    //             found = true;
    //             break; 
    //         }
    //     }
    //     if(found)
    //     {
    //         cout<<"Found"<<endl;
    //         break;
    //     }
    // }

    //Better Approach
    //using maps
    // map<int,int>mp;
    
    // for(int i = 0 ; i<vec.size() ; i++)
    // {
    //     int rem =  k-vec[i];
    //     if(mp.find(rem) != mp.end())
    //     {
    //         cout<<"found"<<endl;
    //         break;
    //     }
    //     else
    //     {
    //         mp[vec[i]] = i;
    //     }
    // }

    // Optimal Approach
    sort(vec.begin() , vec.end());
    int left = 0 , right = vec.size()-1;
    bool found = false;

    while(left<=right)
    {
        int sum = vec[left]+vec[right];
        if(sum == k)
        {
            cout<<"found"<<endl;
            found=true;
            break;
        }
        else if(sum>k)
        {
            right--;
        }
        else
        {
            left++;
        }
    }
    if(!found)
    {
        cout<<"Not found ! "<<endl;
    }

    return 0;
}
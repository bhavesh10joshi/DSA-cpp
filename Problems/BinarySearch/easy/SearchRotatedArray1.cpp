#include<iostream>
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
    int x;
    cin>>x;

    // Brute Force Approacch
    // int ans = 0;
    // for(int i = 0 ; i<vec.size() ; i++)
    // {
    //     if(vec[i] == x)
    //     {
    //         ans = i;
    //         break;
    //     }
    // }
    // cout<<ans<<endl;
    
    // Optimal Approach
    int ans = -1 , low = 0 , high = vec.size()-1;
 
    while(low<=high)
    {
        int mid = (high + low)/2;
        if(vec[mid] == x)
        {
            ans = mid;
            break;
        }
        else if(vec[mid] >= vec[low])
        {
            if(x<=vec[mid] && x>=vec[low])
            {
                high = mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        else
        {
            if(x>=vec[mid] && x<=vec[high])
            {
                low = mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
    }





    return 0;
}
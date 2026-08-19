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

    // Brute force approach
    // Use Merge Sort

    // Better Approach
    // int cnt0 = 0 , cnt1 = 0 , cnt2 = 0;
    // for(int i = 0 ; i<vec.size() ; i++)
    // {
    //     if(vec[i] == 0)
    //     {
    //         cnt0++;
    //     }
    //     else if(vec[i] == 1)
    //     {
    //         cnt1++;
    //     }
    //     else if(vec[i] == 2)
    //     {
    //         cnt2++;
    //     }
    // }
    // for(int i = 0 ; i<cnt0 ; i++)
    // {
    //     vec[i] = 0;
    // }
    // for(int i = cnt0-1 ; i<(cnt0+cnt1)-1 ; i++)
    // {
    //     vec[i] = 1;
    // }
    // for(int i = (cnt0+cnt1)-1 ; i<vec.size() ; i++)
    // {
    //     vec[i] = 2;
    // }

    // Optimal Approach(Dutch National Flag Algo)

    int mid = 0 , high = vec.size()-1 , low=mid;
    
    while(mid<=high)
    {
        if(vec[mid] == 0)
        {
            swap(vec[low] , vec[mid]);
            low++;
            mid++;
        }
        else if(vec[mid] == 1)
        {
            mid++;
        }
        else if(vec[mid] == 2)
        {
            swap(vec[mid] , vec[high]);
            high--;
        }
    }

    for(int i = 0 ; i<n ; i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    return 0;
}
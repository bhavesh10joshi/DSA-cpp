#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>arr1;
    vector<int>arr2;
    int n,m;
    cin>>n>>m;

    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;
        arr1.push_back(no);
    }
    for(int i = 0 ; i<m ; i++)
    {
        int no;
        cin>>no;
        arr2.push_back(no);
    } 

    // Brute Force Approach
    // vector<int>ans;
    // int i = 0 , j = 0;
    // while(i<arr1.size() && j<arr2.size())
    // {
    //     while(i<arr1.size() && arr1[i]<=arr2[j])
    //     {
    //         ans.push_back(arr1[i]);
    //         i++;
    //     }
    //     while(j<arr2.size() && arr1[i]>=arr2[j])
    //     {
    //         ans.push_back(arr2[j]);
    //         j++;
    //     }
    // }
    // while(i<arr1.size())
    // {
    //     ans.push_back(arr1[i]);
    //     i++;      
    // } 
    // while(j<arr2.size())
    // {
    //     ans.push_back(arr2[j]);
    //     j++;      
    // }

    // for(int k = 0 ; k<ans.size() ; k++)
    // {
    //     if(k<=(n-1))
    //     {
    //         arr1[k] = ans[k];
    //     }
    //     else
    //     {
    //         arr2[k-(m-1)] = ans[k];
    //     }
    // }
    
    // cout<<"arr1 : ";
    // for(int k = 0 ; k<arr1.size() ; k++)
    // {
    //     cout<<arr1[k]<<" ";
    // }
    // cout<<endl;
    // cout<<"arr2 : ";
    // for(int k = 0 ; k<arr2.size() ; k++)
    // {
    //     cout<<arr2[k]<<" ";
    // }
    // cout<<endl;

    // Better Approach
    // int left = arr1.size()-1 , right = 0;

    // while(left >= 0 && right<arr2.size())
    // {
    //     while(left >= 0 && arr2[right]<=arr1[left])
    //     {
    //         swap(arr2[right] , arr1[left]);
    //         right++;
    //     }
    //     while(right < arr2.size() && arr2[right]>=arr1[left])
    //     {
    //         left--;
    //     }
    // }
    // sort(arr1.begin() , arr1.end());
    // sort(arr2.begin() , arr2.end());

    // cout<<"arr1 : ";
    // for(int k = 0 ; k<arr1.size() ; k++)
    // {
    //     cout<<arr1[k]<<" ";
    // }
    // cout<<endl;
    // cout<<"arr2 : ";
    // for(int k = 0 ; k<arr2.size() ; k++)
    // {
    //     cout<<arr2[k]<<" ";
    // }
    // cout<<endl;

    // Shell Sort Gap Method
    int gap = ((n+m)/2) + ((n+m)%2);
    int left = 0 , right = gap;
    if(gap>=n)
    {
        right = gap-n;
    } 

    while(left<n && right<m)
    {
        while(right<m && left<n && arr1[left] >= arr2[right])
        {
            swap(arr1[left] , arr2[right]);
            left++;
            right++;
        }
        while(right<m && left<n && arr1[left] <= arr2[right])
        {
            left++;
            right++;
        }
        if(gap == 1 && gap/2 == 1)
        {
            break;
        }
        if(right>=m || left>=n)
        {
            gap = (gap/2) + (gap%2);
            left = 0 , right = gap;
            if(gap>=n)
            {
                right = gap-n;
            }          
        }
    }

    return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>arr1;
    vector<int>arr2;

    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;
        arr1.push_back(no);
    }
    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;
        arr2.push_back(no);
    }

    // Brute Force Approach
    vector<int>ans;

    // int i = 0 , j = 0 ; 
    // m and n are the legit sizes of the arrays given in the question
    // while(i<m && j<n)
    // {
    //     while(i<m && arr1[i]<=arr2[j])
    //     {
    //         ans.push_back(arr1[i]);
    //         i++;
    //     }
    //     while(i<m && j<n &&  arr2[j]<=arr1[i])
    //     {
    //         ans.push_back(arr2[j]);
    //         j++;
    //     }
    // }
    // while(i<m)
    // {
    //     ans.push_back(arr1[i]);
    //     i++;
    // }
    // while(j<n)
    // {
    //     ans.push_back(arr2[j]);
    //     j++;
    // }
    // for(int k = 0 ; k<arr1.size() ; k++)
    // {
    //     arr1[k] = ans[k];
    // }

    // Better Approach
    // int i = m;

    // for(int j = 0 ; j<n ; j++)
    // {
    //     arr1[i] = arr2[j];
    //     i++;
    // }

    // sort(arr1.begin() , arr1.end());

    // Backward 3 Pointer Approach
    int k = m+n-1;
    int i = m-1 , j = n-1;
    while(i>=0 && j>=0 && k>=0)
    {
        while(i>=0 && j>=0 && arr1[i]>=arr2[j])
        {
            arr1[k] = arr1[i];
            i--;
            k--;
        }
        while(i>=0 && j>=0 && arr1[i]<=arr2[j])
        {
            arr1[k] = arr2[j];
            j--;
            k--;
        }
    }
    while(k>=0 && j>=0)
    {
        arr1[k] = arr2[j];
        j--;
        k--;
    }
    return 0;
}
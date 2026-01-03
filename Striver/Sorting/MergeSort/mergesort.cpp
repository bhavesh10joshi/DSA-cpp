#include<bits/stdc++.h>
using namespace std;
void merge(int low , int mid , int high , vector<int>&vec)
{
    vector<int>temp;
    int i = low;
    int j = mid+1;
    while(i<=mid && j<=high)
    { 
        if(vec[i]>=vec[j])
        {
            temp.push_back(vec[j]);
            j++;
        }
        else
        {
            temp.push_back(vec[i]);
            i++;
        }
    }
    while(i<=mid)
    {
        temp.push_back(vec[i]);
        i++;
    }
    while(j<=high)
    {
        temp.push_back(vec[j]);
        j++;
    }
    for(i = low ; i<=high ; i++)
    {
        vec[i] = temp[i-low];
    }
}
void mergesort(vector<int>&vec , int low , int high)
{
    int mid = (low+high)/2;
    if(low >= high)
    {
        return;
    } 
    mergesort(vec , low , mid);
    mergesort(vec , mid+1 , high);
    merge(low , mid , high , vec);
}
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
    mergesort(vec , 0 , n-1);
    for(int i=0 ; i<vec.size() ; i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    return 0;
}


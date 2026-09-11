#include<iostream>
#include<vector>
using namespace std;
int floorVal(vector<int>&vec , int x)
{
    int high = vec.size()-1;
    int low = 0;
    int ans = -1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(vec[mid] == x)
        {
            return vec[mid];
        }
        else if(vec[mid]>x)
        {
            high=mid-1;
        }
        else
        {
            ans = vec[mid];
            low = mid + 1;
        }
    }
    return ans;
}
int CeilVal(vector<int>&vec , int x)
{
    int high = vec.size()-1;
    int low = 0;
    int ans = -1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(vec[mid] == x)
        {
            return vec[mid];
        }
        else if(vec[mid]<x)
        {
            low=mid+1;
        }
        else
        {
            ans = vec[mid];
            high = mid - 1;
        }
    }
    return ans;
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

    int x;
    cin>>x;
    int Floor = floorVal(vec , x);
    int Ceil = CeilVal(vec , x);

    cout<<"Floor : "<<Floor<<" "<<" Ceil : "<<Ceil<<endl;
    
    return 0;
}
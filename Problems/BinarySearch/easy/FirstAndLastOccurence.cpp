#include<iostream>
#include<vector>
using namespace std;
int FirstOccur(vector<int>&vec , int x)
{
    int high = vec.size()-1;
    int low = 0;
    int ans = -1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(vec[mid] == x)
        {
            ans = mid;
            high = mid-1;
        }
        else if(vec[mid]>x)
        {
            high=mid-1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int LastOccur(vector<int>&vec , int x)
{
    int high = vec.size()-1;
    int low = 0;
    int ans = -1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(vec[mid] == x)
        {
            ans = mid;
            low = mid+1;
        }
        else if(vec[mid]<x)
        {
            low=mid+1;
        }
        else
        {
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
    int First = FirstOccur(vec , x);
    int Last = LastOccur(vec , x);

    cout<<"Floor : "<<First<<" "<<" Ceil : "<<Last<<endl;
    
    return 0;
}
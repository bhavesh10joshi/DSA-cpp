#include<iostream>
#include<vector>
using namespace std;
int BinarySRecursive(vector<int>&vec , int high , int low , int target)
{
    if(high<low)
    {
        return -1;
    }
    int mid = (high + low)/2;
    if(vec[mid] == target)
    {
        return mid ;
    }
    else if(vec[mid] < target)
    {
        BinarySRecursive(vec , high , mid+1 , target); 
    }
    else
    {
        BinarySRecursive(vec , mid-1 , low , target);
    }
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

    int target;
    cin>>target;

    int ans = BinarySRecursive(vec , vec.size()-1 , 0 , target);

    if(ans == -1)
    {
        cout<<"Not found " <<endl;
    }
    else
    {
        cout<<"Index is : "<<ans<<endl;
    }


    return 0;
}
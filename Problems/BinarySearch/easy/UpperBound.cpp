#include<iostream>
#include<vector>
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
    int target;
    cin>>target;

    int ans = vec.size();
    int high = vec.size()-1 , low = 0;
    
    while(high>=low)
    {
        int mid = (high + low)/2;

        if(vec[mid] >= target)
        {
            ans = mid;
            low = mid+1;
        }
        else if(vec[mid] > target)
        {
            high = mid-1; 
        }
    }
    cout<<ans<<endl;
    return 0;
}
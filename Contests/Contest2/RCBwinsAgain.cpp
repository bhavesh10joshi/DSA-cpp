#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    vector<int>vec;
    vector<int>ans;
    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;
        vec.push_back(no);
    }

    int mid = (0+(n-1))/2;
    int i=mid , j=mid+1;
    while(i>=0 && j<n)
    {
        if(i>=0 && j<n)
        {
            ans.push_back(vec[i]);
            ans.push_back(vec[j]);
        }
        else if(i>=0 && j>=n)
        {
            ans.push_back(vec[i]);
        }
        else if(i<0 && j<n)
        {
            ans.push_back(vec[j]);
        }
        i--;
        j++;
    }
    if(i>=0 && j>=n)
    {
        ans.push_back(vec[i]);
    }
    else if(i<0 && j<n)
    {
        ans.push_back(vec[j]);
    }
    for(int i = 0 ; i<ans.size() ; i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
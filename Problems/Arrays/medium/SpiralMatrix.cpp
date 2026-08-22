#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    int m;
    cin>>n>>m;
    vector<vector<int>>vec;

    for(int i = 0 ; i<n ; i++)
    {
        vector<int>arr;
        for(int j = 0 ; j<m ; j++)
        {
            int no;
            cin>>no;
            arr.push_back(no);
        }
        vec.push_back(arr);
    }

    // Only one solution exists
    vector<int>ans;
    int top = 0 , bottom = vec.size()-1 , left = 0 , right = vec[0].size()-1;

    while(left<=right && top<=bottom)
    {
        for(int i = left ; i<=right ; i++)
        {
            ans.push_back(vec[top][i]); 
        }
        top++;
        for(int i = top ; i<=bottom ; i++)
        {
            ans.push_back(vec[i][right]);
        }
        right--;
        if(top<=bottom)
        {
            for(int i = right ; i>=left ; i--)
            {
                ans.push_back(vec[bottom][i]);
            }
            bottom--;
        }
        if(left<=right)
        {
            for(int i = bottom ; i>=top ; i--)
            {
                ans.push_back(vec[i][left]);
            }
            left++;
        }
    }
    for(int i = 0 ; i<ans.size() ; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}
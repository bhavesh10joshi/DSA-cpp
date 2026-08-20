#include<iostream>
#include<vector>
using namespace std;
void Recursion(vector<int>&ds , int arr[] , vector<int>vec , vector<vector<int>>&ans)
{
    if(ds.size() == vec.size())
    {
        ans.push_back(ds);
        return;
    }

    for(int i = 0 ; i<vec.size() ; i++)
    {
        if(!arr[i])
        {
            ds.push_back(vec[i]);
            arr[i] = 1;
            Recursion(ds , arr , vec , ans);
            ds.pop_back();
            arr[i] = 0;
        }
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

    // Recursion Approach
    vector<vector<int>>ans;
    int arr[3] = {0};
    vector<int>ds;

    Recursion(ds , arr , vec , ans);

    for(int i = 0 ; i<ans.size() ; i++)
    {
        cout<<"(";
        for(int j = 0 ; j<ans[i].size() ; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<")";
        cout<<endl;
    }

    return 0;
}
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>vec;

    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;
        vec.push_back(no);
    }

    // Brute force Solution 
    // set<vector<int>>st;

    // for(int i = 0 ; i<vec.size() ; i++)
    // {
    //     for(int j = i+1 ; j<vec.size() ; j++)
    //     {
    //         for(int k = j+1 ; k<vec.size() ; k++)
    //         {
    //             vector<int>num;
    //             if(vec[i] + vec[j] + vec[k] == 0)
    //             {
    //                 num.push_back(vec[i]);
    //                 num.push_back(vec[j]);
    //                 num.push_back(vec[k]);
    //                 sort(num.begin() , num.end());
    //                 st.insert(num);
    //             }
    //         }
    //     }
    // }
    // vector<vector<int>>ans(st.begin() , st.end());

    // Better Solution
    // set<vector<int>>st;

    // for(int i = 0 ; i<vec.size() ; i++)
    // {
    //     set<int>s;
    //     for(int j = i+1 ; j<vec.size() ; j++)
    //     {
    //         vector<int>v;
    //         if(s.find(-(vec[i]+vec[j])) != s.end())
    //         {
    //             v.push_back(vec[i]);
    //             v.push_back(vec[j]);
    //             v.push_back(-(vec[i]+vec[j]));
    //             sort(v.begin() , v.end());
    //             st.insert(v);
    //         }
    //         s.insert(vec[j]);   
    //     }
    // }

    // vector<vector<int>>ans(st.begin() , st.end());

    // Optimal Solution 
    sort(vec.begin(),vec.end());
    vector<vector<int>>ans;
    for(int i = 0 ; i<vec.size() ; i++)
    {
        if(vec[i] == vec[i-1] && i>0) continue;
        
        int j = i+1 , k=vec.size()-1;
        while(j<k)
        {
            int sum = vec[i] + vec[j] + vec[k];
            if(sum == 0 && j<k)
            {
                vector<int>row;
                row.push_back(vec[i]);
                row.push_back(vec[j]);
                row.push_back(vec[k]);
                ans.push_back(row);
                j++;
                k--;
                while((vec[j] == vec[j-1] || vec[k] == vec[k+1]) && j<k)
                {
                    if(vec[j] == vec[j-1])
                    {
                        j++;
                    }
                    else
                    {
                        k--;
                    }
                }
            }
            else if(sum>0)
            {
                k--;
            }
            else if(sum<0)
            {
                j++;
            }
        }
    }
    for(int i = 0 ; i<ans.size() ; i++)
    {
        for(int j = 0 ; j<ans[i].size() ; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
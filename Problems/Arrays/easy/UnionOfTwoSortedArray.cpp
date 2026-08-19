#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main()
{
    vector<int>vec1;
    int n;
    cin>>n;

    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;
        vec1.push_back(no);
    } 

    vector<int>vec2;
    int m;
    cin>>m;
    for(int i = 0 ; i<m ; i++)
    {
        int no;
        cin>>no;
        vec2.push_back(no);
    }

    // Brute force approach
    // set<int>str;

    // for(int i = 0 ; i<vec1.size() ; i++)
    // {
    //     str.insert(vec1[i]);
    // }
    // for(int i = 0 ; i<vec2.size() ; i++)
    // {
    //     str.insert(vec2[i]);
    // }
    // vector<int>ans;
    // for(auto it = str.begin() ; it != str.end() ; it++)
    // {
    //     ans.push_back(*it);
    // }
    // for(int i = 0 ; i<ans.size() ; i++)
    // {
    //     cout<<ans[i]<<" ";
    // }

    // Optimized Solution
    vector<int>temp;
    int i = 0 , j = 0;
    if(vec1[i] <= vec2[j])
    {
        temp.push_back(vec1[i]);
        i++;
    }
    else
    {
        temp.push_back(vec2[j]);
        j++;
    }

    while(i<vec1.size() && j<vec2.size())
    {
        if(vec1[i] <= vec2[j])
        {
            if(temp[temp.size()-1] != vec1[i])
            {
                temp.push_back(vec1[i]);
            }
            i++;
        }
        if(vec1[i] >= vec2[j])
        {
            if(temp[temp.size()-1] != vec2[j])
            {
                temp.push_back(vec2[j]);
            }
            j++;
        }
    }
    while(i < vec1.size())
    {
        if(vec1[i] != temp[temp.size()-1])
        {
            temp.push_back(vec1[i]);
        }
        i++;
    }
    while(j < vec2.size())
    {
        if(vec2[j] != temp[temp.size()-1])
        {
            temp.push_back(vec2[j]);
        }
        j++;
    }   
    for(int k = 0 ; k<temp.size() ; k++)
    {
        cout<<temp[k]<<" ";
    }
    return 0;
}
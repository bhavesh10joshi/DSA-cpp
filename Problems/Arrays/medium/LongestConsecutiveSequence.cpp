#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
#include<unordered_set>
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

    // Brute Force Approach
    // int count = 1;
    // for(int i = 0 ; i<vec.size() ; i++)
    // {
    //     int c = 1;
    //     int el = vec[i];
    //     for(int j = 0 ; j<vec.size() ; j++)
    //     {
    //         if(el+1 == vec[j])
    //         {
    //             el = vec[j];
    //             c++;
    //             j = -1;
    //         }
    //     }
    //     count = max(c , count);
    // }
    // cout<<count<<endl;
    
    // Better Approach
    // sort(vec.begin() , vec.end());
    // int LastSmaller = vec[0];
    // int Longest = 1 ;
    // int record = 1;
    // for(int i = 1 ; i<vec.size() ; i++)
    // {
    //     if(LastSmaller == vec[i]-1)
    //     {
    //         record++;
    //     }
    //     else if(vec[i] == LastSmaller)
    //     {
    //         continue;
    //     }
    //     else
    //     {
    //         Longest = max(Longest , record);
    //         record = 1;
    //     }
    //     LastSmaller = max(LastSmaller , vec[i]);
    // }
    // Longest = max(Longest , record);
    // cout<<Longest<<endl;

    // Optimal Approach
    unordered_set<int>st;

    for(int i = 0 ; i<vec.size() ; i++)
    {
        st.insert(vec[i]);
    }
    int longest = INT_MIN; 
    for(auto it : st)
    {
        if(st.find(it-1) != st.end())
        {
            int l = 1;
            int x = it-1 ;
            while(st.find(x+1) != st.end())
            {
                l++;
                x++;
            }
            longest = max(l,longest);
        }
    }

    return 0;
}
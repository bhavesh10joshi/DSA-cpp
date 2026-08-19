#include<iostream>
#include<vector>
#include<map>
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

    // Brute Force approach
    // for(int i = 0 ; i<vec.size() ; i++)
    // {
    //     int cnt = 1;
    //     for(int j = 0 ; j<vec.size() ; j++)
    //     {
    //         if(i == j)
    //         {
    //             continue;
    //         }
    //         else if(vec[i] == vec[j])
    //         {
    //             cnt++;
    //             if(cnt>(vec.size()/2))
    //             {
    //                 break;
    //             }
    //         }
    //     }
    //     if(cnt>(vec.size()/2))
    //     {
    //         cout<<"Found : "<<vec[i]<<endl;
    //         break;
    //     }
    // }

    // Better Approach
    // Using hashmap
    // map<int,int>mpp;
    // for(int i = 0 ; i<vec.size() ; i++)
    // {
    //     mpp[vec[i]]++;
    //     if(mpp[vec[i]]>(vec.size())/2)
    //     {
    //         cout<<"Found : "<<vec[i]<<endl;
    //         break;
    //     }
    // }

    // Optimal Approach 
    // moore's Voting algorithm
    int cnt = 0;
    int el = vec[0];
    for(int i = 0 ; i<vec.size() ; i++)
    {
        if(cnt == 0)
        {
            el=vec[i];
        }
        if(vec[i] == el)
        {
            cnt++;
        }
        else{
            cnt--;
        }
    }
    cout<<"Found : "<<el<<endl;
 
    return 0;
}
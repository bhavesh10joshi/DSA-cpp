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

    // Brute force approach
    // vector<int>temp;
    // for(int i = 0 ; i<n ; i++)
    // {
    //     if(vec[i] != 0)
    //     {
    //         temp.push_back(vec[i]);
    //     }
    // }
    // int i = 0; 
    // for(; i<temp.size() ; i++)
    // {
    //     vec[i] = temp[i];
    // }
    // for(; i<vec.size() ; i++)
    // {
    //     vec[i] = 0;
    // }

    // for(int j = 0 ; j<vec.size() ; j++)
    // {
    //     cout<<vec[j]<<" ";
    // }

    // Optimized approach 
    int j = -1;

    for(int i = 0 ; i<n ; i++)
    {
        if(vec[i] == 0)
        {
            j = i;
            break;
        }
    }
    if(j != -1)
    {
        for(int i = j+1 ; i<vec.size() ; i++)
        {
            if(vec[i] != 0)
            {
                swap(vec[i] , vec[j]);
                j++;
            }
        }        
    }
    for(int j = 0 ; j<vec.size() ; j++)
    {
        cout<<vec[j]<<" ";
    }

    return 0;
}
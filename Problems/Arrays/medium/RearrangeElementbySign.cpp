#include<iostream>
#include<vector>
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
    // vector<int>neg;
    // vector<int>pos;

    // for(int i = 0 ; i<n ; i++)
    // {
    //     if(vec[i]<0)
    //     {
    //         neg.push_back(vec[i]);
    //     }
    //     else
    //     {
    //         pos.push_back(vec[i]);
    //     }
    // }

    // for(int i = 0 ; i<neg.size() ; i++)
    // {
    //     vec[i*2] = pos[i];
    //     vec[(i+1)*2]=neg[i];
    // }

    // for(int i = 0 ; i<n ; i++)
    // {
    //     cout<<vec[i]<<" ";
    // }

    // Optimal Approach
    // vector<int>ans(vec.size(),0);
    // int pos = 0 , neg = 1 ;
    // for(int i = 0 ; i<vec.size() ; i++)
    // {
    //     if(vec[i]>0)
    //     {
    //         ans[pos]=vec[i];
    //         pos=pos+2;
    //     }
    //     else
    //     {
    //         ans[neg]=vec[i];
    //         neg=neg+2;
    //     }
    // }

    // for(int i = 0 ; i<ans.size() ; i++)
    // {
    //     cout<<ans[i]<<" ";
    // }

    // The above question when tweaked in a way that it says that now we the array can contain 
    // either more number or pos or negs , you have to set the extra elements in last section of the output array without disturbing their order
    vector<int>neg;
    vector<int>pos;

    for(int i = 0 ; i<n ; i++)
    {
        if(vec[i]<0)
        {
            neg.push_back(vec[i]);
        }
        else
        {
            pos.push_back(vec[i]);
        }
    }

    if(pos.size()>neg.size())
    {
        for(int i = 0 ; i<neg.size() ; i++)
        {
            vec[i*2]=pos[i];
            vec[(i+1)*2]=neg[i];
        }
        int index = neg.size()*2;
        for(int i = neg.size() ; i<pos.size() ; i++)
        {
            vec[index] = pos[i];
            index++;
        } 
    }
    else
    {
        for(int i = 0 ; i<pos.size() ; i++)
        {
            vec[i*2]=pos[i];
            vec[(i+1)*2]=neg[i];
        }
        int index = pos.size()*2;
        for(int i = pos.size() ; i<neg.size() ; i++)
        {
            vec[index] = neg[i];
            index++;
        } 
    }

    for(int i = 0 ; i<n ; i++)
    {
        cout<<vec[i]<<" ";
    }

    return 0;
}
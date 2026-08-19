#include<iostream>
#include<vector>
#include<limits>
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
    // vector<int>Record;
    // int count = 0 ;
    // for(int i = 0 ; i<vec.size() ; i++)
    // {
    //     if(i == 0)
    //     {
    //         if(vec[i] == 1)
    //         {
    //             count++;
    //         }
    //     }
    //     else if(vec[i] == 1 && vec[i-1] == 1)
    //     {
    //         count++;
    //     }
    //     else if(vec[i] == 1 && vec[i-1] == 0)
    //     {
    //         count = 1;
    //     }
    //     else if(vec[i] == 0 && vec[i-1] == 1)
    //     {
    //         count = 0;
    //         Record.push_back(count);
    //     }
    // } 
    // Record.push_back(count);
    // int Max = -1;
    // for(int i = 0 ; i<Record.size() ; i++)
    // {
    //     Max = max(Max , Record[i]); 
    // }
    // cout<<"Maximum Consecutive One : "<<Max<<endl;

    // Optimized Approach
    int count = 0 , Max = -1;
    for(int i = 0 ; i<vec.size() ; i++)
    {
        if(i == 0)
        {
            if(vec[i] == 1)
            {
                count = 1;
            }
        }
        else if(vec[i] == 1)
        {
            count++;
        }
        else if(vec[i] == 0)
        {
            Max = max(Max , count);
            count = 0;
        }
    }
    Max = max(Max , count);
    
    cout<<"Max Consecutive One's is : "<<Max<<endl;

    return 0;
}
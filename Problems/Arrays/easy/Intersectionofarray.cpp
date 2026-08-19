#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int>vec1;
    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;
        vec1.push_back(no);
    }
    
    int m;
    cin>>m;;
    vector<int>vec2;
    for(int i = 0 ; i<m ; i++)
    {
        int no;
        cin>>no;
        vec2.push_back(no);
    }

    // Brute force approach
    // vector<int>Visited(vec2.size() , 0);
    // vector<int>temp;
    // int j = 0;
    // for(int i = 0 ; i<vec1.size() ; i++)
    // {   
    //     while(vec2[j] < vec1[i])
    //     {
    //         j++;
    //     }
    //     if(vec2[j] == vec1[i])
    //     {
    //         if(!Visited[j])
    //         {
    //             temp.push_back(vec1[i]);
    //             Visited[j] = 1;
    //         }
    //     }
    // }
    // for(int i = 0 ; i<temp.size() ; i++)
    // {
    //     cout<<temp[i]<<" ";
    // }

    // Optimized approach 
    vector<int>temp;
    int i = 0 , j = 0;
    while(i<vec1.size() && j<vec2.size())
    {
        if(vec1[i] < vec2[j])
        {
            i++;
        }
        else if(vec1[i] >vec2[j])
        {
            j++;
        }
        else
        {
            temp.push_back(vec1[i]);
            i++;
            j++;
        }
    }
    for(int k = 0 ; k<temp.size() ; k++)
    {
        cout<<temp[k]<<" ";
    }

    return 0;
}
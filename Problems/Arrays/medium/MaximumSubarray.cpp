#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
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

    // Brute Force Approach & Better approach
    // int sum = 0;
    // for(int i = 0 ; i<vec.size() ; i++)
    // {
    //     int s = 0;
    //     for(int j = i ; j<vec.size() ; j++)
    //     {
    //         s = s + vec[j];
    //         sum = max(sum,s);
    //     }
    // }
 
    // Optimal Solution
    // Kadane's Algo

    int sum = 0,start=-1,ansEnd=-1,ansStart=-1;
    int Max = -100;
    vector<int>emp;
    for(int i = 0 ; i<n ; i++)
    {
        if(sum == 0)
        {
            start = i;
        }
        sum = sum + vec[i];
        if(sum > Max)
        {
            ansStart=start;
            ansEnd=i;
        }
        Max = max(Max , sum);
        if(sum<0)
        {
            sum = 0;
        }
    }
    //If the question asks to return an empty array if there is no subarray greater then 0 sum then return empty subarray 
    //if(Max<0) return emp;


    return 0;
}
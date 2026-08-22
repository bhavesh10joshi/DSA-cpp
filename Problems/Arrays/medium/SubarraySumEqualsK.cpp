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

    int k;
    cin>>k;

    // Brute Force Approach
    int count = 0;
    for(int i = 0 ; i<vec.size() ; i++)
    {   
        int sum = 0;
        for(int j = i ; j<vec.size() ; j++)
        {
            sum = sum+vec[j];
            if(sum == k)
            {
                count++;
            }
        }
    }
    cout<<count<<endl;

    return 0;
}
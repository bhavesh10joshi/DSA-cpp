#include<bits/stdc++.h>
using namespace std;
bool LinearSearch(vector<int>vec , int no)
{
    for(int i = 0 ; i<vec.size() ; i++)
    {
        if(vec[i] == no)
        {
            return true;
        } 
    }
    return false;
}
int main()
{
    vector<int>vec;
    int n;
    cin>>n;
    for(int i = 0 ; i<n-1 ; i++)
    {
        int no;
        cin>>no;
        vec.push_back(no);
    }
    for(int i = 1 ; i<=n ; i++)
    {
        bool val = LinearSearch(vec , i);
        if(!val)
        {
            cout<<"The Missing number is "<<i<<endl;
            break;
        } 
    }
    return 0;
}
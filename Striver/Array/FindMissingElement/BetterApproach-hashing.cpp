#include<bits/stdc++.h>
using namespace std;
int Hashing(vector<int>vec)
{
    int n = vec.size()+1;
    vector<int>hash(n , 0);
    for(int i = 0 ; i<n ; i++)
    {
        hash[vec[i]] = 1;
    }
    int ans = -1;
    for(int i = 0 ; i<n ; i++)
    {
        if(hash[i] == 0)
        {
            ans = i;
            return ans;
        }
    }
    return ans;
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
    cout<<"The Missing Element is "<<Hashing(vec)<<endl;
    return 0; 
}
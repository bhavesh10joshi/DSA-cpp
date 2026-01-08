#include<bits/stdc++.h>
using namespace std;
int LinearSearch(vector<int>vec , int key)
{
    int ans = -1; 
    for(int i = 0 ; i<vec.size() ; i++)
    {
        if(vec[i] == key)
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
    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;
        vec.push_back(no);
    }
    int key;
    cin>>key;
    int ans = LinearSearch(vec , key);
    if(ans == -1)
    {
        cout<<"No Such key Exist! "<<endl;
    } 
    else
    {
        cout<<"The position of the key is "<<ans+1<<endl;
    }
    return 0;
}
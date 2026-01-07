#include<bits/stdc++.h>
using namespace std;
int ReturningIndex(vector<int>&vec , set<int>&s)
{
    int i = 0;
    for(auto st : s)
    {
        vec[i] = st;
        i++;
    }
    return i;
}
void RemoveDupli(vector<int>&vec , set<int>&s)
{
    for(int i = 0 ; i<vec.size() ; i++)
    {
        s.insert(vec[i]);
    }
}
int main()
{
    vector<int>vec;
    set<int>s;
    int n;
    cin>>n;
    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;
        vec.push_back(no);
    }
    RemoveDupli(vec , s);
    cout<<"The answer is"<<ReturningIndex(vec , s)<<endl;
    return 0;
}
// 7
// 1
// 1
// 2
// 2
// 2
// 3
// 3
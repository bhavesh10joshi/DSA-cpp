#include<bits/stdc++.h>
using namespace std;
bool Check(vector<int>&vec)
{
    for(int i = 0 ; i<vec.size()-2 ; i++)
    {
        if(vec[i]>vec[i+1])
        {
            return false;
        }
    }
    return true;
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
if(Check(vec))
{
    cout<<"Sorted !"<<endl;
}
else{
    cout<<"Not Sorted !"<<endl;
}
return 0;
}
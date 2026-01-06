#include<bits/stdc++.h>
using namespace std;
int SLargest(vector<int>&vec)
{
    // if Negative Numbers are permitted then sl = INT_MIN and l will be same;
    int sl = -1;
    int l = vec[0];
    for(int i = 1 ; i<vec.size() ; i++)
    {
        if(vec[i] > l)
        {
            sl = l;
            l = vec[i];
        }
        else if(vec[i]>sl && vec[i] != l)
        {
            sl = vec[i];
        }
    }
    return sl;
}
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
cout<<"The Second Largest Element in an array is "<<SLargest(vec)<<endl;
return 0;
}
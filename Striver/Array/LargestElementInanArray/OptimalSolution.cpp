#include<bits/stdc++.h>
using namespace std;
int Find(vector<int>vec)
{
    int largest = 0;
    for(int i = 0 ; i<vec.size() ; i++)
    {
        if(vec[i]>=largest)
        {
            largest = vec[i];
        }
    }
    return largest;
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
cout<<"The largest Element is "<<Find(vec)<<endl;
    return 0;
}
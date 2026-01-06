#include<bits/stdc++.h>
using namespace std;
int SLargest(int l , vector<int>vec)
{
    int s = -1;
    for(int i = 0 ; i<vec.size() ; i++)
    {
        if(vec[i] != l && vec[i] >= s)
        {
            s = vec[i];
        }
    }
    return s;
}
int Largest(vector<int>vec)
{
    int largest = 0;
    for(int i = 0 ; i<vec.size() ; i++)
    {
        if(vec[i] >= largest)
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
int sec = SLargest(Largest(vec),vec);
cout<<"The Second Largest Element in an array is "<<sec<<endl;
return 0;
}
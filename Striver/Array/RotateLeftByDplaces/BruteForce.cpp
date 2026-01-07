#include<bits/stdc++.h>
using namespace std;
void Rotate(vector<int>&vec , int k)
{
    k = k % vec.size();
    vector<int>temp(vec.size());
    for(int i = 0 ; i<vec.size() ; i++)
    {
        int posi = (i+k)%vec.size();
        temp[posi]=vec[i];
    }
    for(int i = 0 ; i<vec.size() ; i++)
    {
        vec[i] = temp[i];
    }
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
    int k ;
    cin>>k;
    Rotate(vec,k);
    for(int i = 0 ; i<n ; i++)
    {
        cout<<vec[i]<<" ";
    }
    return 0;
}

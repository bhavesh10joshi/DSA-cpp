#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
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

    // sorting 
    sort(vec.begin() , vec.end());

    for(int i = vec.size()-1 ; i>=0 ; i--)
    {
        cout<<vec[i]<<" ";
    }

    return 0;
}
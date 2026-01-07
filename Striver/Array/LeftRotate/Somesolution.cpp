#include<bits/stdc++.h>
using namespace std;
void Rotate(vector<int>&vec)
{
    int first = vec[0] , i=1;
    for(; i<vec.size()-1 ; i++)
    {
        vec[i-1] = vec[i];
    }
    if(i == vec.size()-1){
        vec[vec.size()-1] = first;
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
    Rotate(vec);
    for(int i = 0 ; i<n ; i++)
    {
        cout<<vec[i]<<" ";
    }
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
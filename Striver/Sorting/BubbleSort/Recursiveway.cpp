#include<bits/stdc++.h>
using namespace std;
void Sortit(int i , int high , vector<int>&vec)
{
    if(i >= high)
    {
        return;
    }
    if(vec[i] >= vec[i+1])
    {
        swap(vec[i] , vec[i+1]);
    }
    Sortit(i+1 , high , vec);
}
void RecursiveBubbleSort(int high , vector<int>&vec)
{
    if(high == 0)
    {
        return;
    }
    Sortit(0 , high , vec);
    RecursiveBubbleSort(high-1 , vec);
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
    RecursiveBubbleSort(n-1 , vec);
    for(int i = 0 ; i<vec.size() ; i++)
    {
        cout<<vec[i]<<" ";
    }
    return 0;   
}
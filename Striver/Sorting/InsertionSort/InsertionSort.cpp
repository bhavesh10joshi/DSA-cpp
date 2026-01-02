#include<bits/stdc++.h>
using namespace std;
void InsertionSort(vector<int>&vec)
{
    for(int i = 0 ; i<vec.size() ; i++)
    {
        for(int j = i ; j>=1 ; j--)
        {
            if(vec[j]<vec[j-1])
            {
                swap(vec[j] , vec[j-1]);
            }
            else
            {
                break;
            }
        }
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
    InsertionSort(vec);
    for(int i = 0 ; i<vec.size() ; i++)
    {
        cout<<vec[i]<<" ";
    } 
    return 0;
}
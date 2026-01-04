#include<bits/stdc++.h>
using namespace std;
void RecursiveInsertionSort(int high , vector<int>&vec)
{
    if(high >= vec.size())
    {
        return;
    }
    for(int j = high ; j>=1 ; j--)
    {
        if(vec[j] <= vec[j-1])
        {
            swap(vec[j] , vec[j-1]);
        }
        else
        {
            break;
        }
    }
    RecursiveInsertionSort(high+1 , vec);
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
    RecursiveInsertionSort(0 , vec);
    for(int i = 0 ; i<vec.size() ; i++)
    {
        cout<<vec[i]<<" ";
    }
    return 0;
} 
// 7
// 9
// 14
// 15
// 12
// 6
// 8
// 13
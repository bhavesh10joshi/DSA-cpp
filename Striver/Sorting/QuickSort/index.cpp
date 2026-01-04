#include<bits/stdc++.h>
using namespace std;
int pivot(int high , int low , vector<int>&vec)
{
    int p = vec[low];
    int i = low;
    int j = high;
    while(i<j)
    {
        while(vec[i] <= p && i<=high-1)
        {
            i++;
        }
        while(vec[j] > p && j>=low+1)
        {
            j--;
        }
        if(i<j)
        {
            swap(vec[i], vec[j]);
        }
    }
    swap(vec[low] , vec[j]);
    return j;
}
void QuickSort(int high , int low , vector<int>&vec)
{
    if(low<high)
    {
        int pindex = pivot(high , low , vec);
        QuickSort(pindex-1 , low , vec);
        QuickSort(high , pindex+1 , vec);
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
    QuickSort(n-1 , 0 , vec);
    for(int i = 0 ; i<vec.size() ; i++)
    {
        cout<<vec[i]<<" ";
    }
    return 0;
}
// 8
// 4
// 3
// 2
// 5
// 7
// 9
// 1
// 6
#include<iostream>
#include<vector>
using namespace std;
int SortVectors(int high , int low , vector<int>&vec)
{
    int i = low;
    int j = high;
    int pivot = vec[low];

    while(i<j)
    {
        while(vec[i]<=pivot && i<=high-1)
        {
            i++;
        }
        while(vec[j]>=pivot && j>=low+1)
        {
            j--;
        }
        if(i<j)
        {
            swap(vec[i] , vec[j]);
        }
    }
    swap(vec[low] , vec[j]);
    return j;
}
void QuickSort(int high , int low , vector<int>&vec)
{
    if(high <= low)
    {
        return;
    }
    int partition = SortVectors(high , low , vec);
    QuickSort(partition-1 , low , vec);
    QuickSort(high , partition+1, vec);
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

    for(int i = 0 ; i<n ; i++)
    {
        cout<<vec[i]<<" ";
    }

    return 0;
}
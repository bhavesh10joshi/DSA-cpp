#include<bits/stdc++.h>
using namespace std;
int Pivot(int low , int high , vector<int>&vec)
{
    int i = low;
    int j = high;
    int p = vec[low];
    while(i<j)
    {
        while(vec[i]<=p && i<=high-1)
        {
            i++;
        }
        while(vec[j]>p && j>=low+1)
        {
            j--;
        }
        if(i<j)
        {
            swap(vec[i] , vec[j]); 
        }
    }
    swap(vec[j] , vec[low]);
    return j;
}
void Sort(int low , int high , vector<int>&vec)
{
    if(low<high)
    {
        int p = Pivot(low , high , vec);
        Sort(low , p-1 , vec);
        Sort(p+1 , high , vec);
    }
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
Sort(0 , n-1 , vec);
for(int i = 0 ; i<n ; i++)
{
    cout<<vec[i]<<" ";
}
cout<<"The largest Element is "<<vec[n-1]<<endl;
    return 0;
}
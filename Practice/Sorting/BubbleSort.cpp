#include<iostream>
#include<vector>
#include<limits>
using namespace std;
void BubbleSort(vector<int>&vec)
{
    bool IsSwap = false;
    int n = vec.size();
    for(int i = n-1 ; i>=0 ; i--)
    {
        for(int j = 0 ; j<=i-1 ; j++)
        {
            if(vec[j]>=vec[j+1])
            {
                IsSwap = true;
                swap(vec[j] , vec[j+1 ]);
            }
        }
        if(!IsSwap)
        {
            break;
        }
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
    BubbleSort(vec);
    for(int i = 0 ; i<n ; i++)
    {
        cout<<vec[i]<<" ";
    }
    return 0 ; 
}
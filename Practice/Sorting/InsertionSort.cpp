#include<iostream>
#include<vector>
#include<limits>
using namespace std;
void InsertionSort(vector<int>&vec)
{
    int n = vec.size();
    for(int i = 1 ; i<n ; i++)
    {
        if(vec[i] <= vec[i-1])
        {
            for(int j = i ; j>=1 ; j--)
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
    InsertionSort(vec);
    for(int i = 0 ; i<n ; i++)
    {
        cout<<vec[i]<<" ";
    }
    return 0 ; 
}
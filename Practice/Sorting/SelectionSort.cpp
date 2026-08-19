#include<iostream>
#include<vector>
#include<limits>
using namespace std;
void SelectionSort(vector<int>&vec)
{
    int n = vec.size();
    for(int i = 0 ; i<n-1 ; i++)
    {
        int index = i;
        for(int j = i+1 ; j<n ; j++)
        {
            if(min(vec[index] , vec[j]) == vec[j])
            {
                index = j;
            }
        }
        swap(vec[i] , vec[index]);
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
    SelectionSort(vec);
    for(int i = 0 ; i<n ; i++)
    {
        cout<<vec[i]<<" ";
    }
    return 0 ; 
}
#include<bits/stdc++.h>
using namespace std;
void MoveZeroes(vector<int>&vec)
{
    //Finding the First zero Element
    int j = -1;
    for(int i = 0 ; i<vec.size() ; i++)
    {
        if(vec[i] == 0)
        {
            j=i;
            break;
        }
    } 
    if(j != -1)
    {
        for(int i = j+1 ; i<vec.size() ; i++)
        {
            if(vec[i] != 0)
            {
                swap(vec[i] , vec[j]);
                j++;
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
    MoveZeroes(vec);
    for(int i = 0 ; i<n ; i++)
    {
        cout<<vec[i]<<" ";
    }
    return 0;
}
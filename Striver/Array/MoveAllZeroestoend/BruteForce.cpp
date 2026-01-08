#include<bits/stdc++.h>
using namespace std;
void MoveAllZeroes(vector<int>&vec)
{
    vector<int>temp(vec.size());
    int k = 0 , j = vec.size()-1;   
    for(int i = 0 ; i<vec.size() && k<=j; i++)
    {
        if(vec[i] != 0)
        {
            temp[k] = vec[i];
            k++; 
        }
        else
        {
            temp[j] = 0;
            j--;
        }
    } 
    for(int i = 0 ; i<temp.size() ; i++ )
    {
        vec[i] = temp[i];
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
    MoveAllZeroes(vec);
    for(int i = 0 ; i<n ; i++)
    {
        cout<<vec[i]<<" ";
    }
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
bool CheckIfSorted(vector<int>&vec)
{
    for(int i = 0 ; i<vec.size()-1 ; i++)
    {
        if(vec[i+1]<=vec[i])
        {
            return false;
        }
    }
    return true;
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

    if(CheckIfSorted(vec))
    {
        cout<<"Sorted !"<<endl;
    }
    else
    {
        cout<<"not sorted !"<<endl;
    }

    return 0;
}
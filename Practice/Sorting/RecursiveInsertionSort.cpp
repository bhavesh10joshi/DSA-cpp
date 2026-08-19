#include<iostream>
#include<vector>
using namespace std;
void RightPlacing(vector<int>&vec , int i)
{
    if(i <= 0)
    {
        return;
    }
    if(vec[i] <= vec[i-1])
    {
        swap(vec[i] , vec[i-1]);
        RightPlacing(vec , i-1);
    }
    return;
}
void Loop(vector<int>&vec , int i)
{
    if(i>=vec.size())
    {
        return ;
    }
    RightPlacing(vec , i);
    Loop(vec , i+1);
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

    Loop(vec , 0);

    for(int i = 0 ; i<n ; i++)
    {
        cout<<vec[i]<<" ";
    }

    return 0;
}
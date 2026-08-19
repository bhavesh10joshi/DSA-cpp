#include<iostream>
#include<vector>
using namespace std;
void SwapGreatest(vector<int>&vec , int i , int j)
{
    if(j <= i)
    {
        return;
    }
    if(vec[j] >= vec[j+1])
    {
        swap(vec[j] , vec[j+1]);
    }
    SwapGreatest(vec , i , j+1);
}
void Loop(vector<int>&vec , int i)
{
    if(i<=0)
    {
        return ;
    }
    SwapGreatest(vec , i , 0);
    Loop(vec , i-1);
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

    Loop(vec , n-1);

    for(int i = 0 ; i<n ; i++)
    {
        cout<<vec[i]<<" ";
    }

    return 0;
}
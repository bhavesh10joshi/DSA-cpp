#include<iostream>
#include<vector>
using namespace std;
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
    for(int j = 0 ; j<vec.size() ; j++)
    {
        bool flag = false;
        for(int i = j+1 ; i<vec.size() ; i++)
        {
            if(vec[j] == vec[i])
            {
                flag = true; 
                vec.erase(vec.begin()+i);
                i--;
            }
        }
        if(!flag)
        {
            cout<<vec[j]<<" ";
        }
    }
    return 0;
}
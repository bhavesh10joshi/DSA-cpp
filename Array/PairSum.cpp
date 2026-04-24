#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    for(int i = 0 ; i<n ; i++)
    {
        vector<int>vec;    
        int m;
        cin>>m;
        int count = 0;
        for(int j = 0 ; j<m ; j++)
        {
            int no;
            cin>>no;

            vec.push_back(no);
        }
        int target;
        cin>>target;
        for(int i = 0 ; i<vec.size() ; i++)
        {
            for(int k = i+1 ; k<vec.size() ; k++)
            {
                if(vec[i] + vec[k] == target)
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
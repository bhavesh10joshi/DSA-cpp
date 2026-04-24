#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n , target , count = 0;
    cin>>n>>target;
    vector<int>vec;

    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;
        vec.push_back(no);
    }

    for(int j = 0 ; j<n ; j++)
    {
        for(int k = j+1 ; k<n ; k++)
        {
            for(int i = k+1 ; i<n ; i++)
            {
                for(int l = i+1 ; l<n ; l++)
                {
                    if(vec[j]-(2*vec[k])+(3*vec[i])-(4*vec[l]) == target)
                    {
                        count++;
                    }
                }
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
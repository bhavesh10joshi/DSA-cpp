#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i = 0 ; i<n ; i++)
    {
        int count = 0;
        vector<int>vec1;
        
        int m;
        cin>>m;
        for(int j = 0 ; j<m ; j++)
        {
            int no;
            cin>>no;
            vec1.push_back(no);
        }
        int target = 0;
        cin>>target;

        for(int k = 0 ; k<m ; k++)
        {
            for(int i = k+1 ; i<m ; i++)
            {
                for(int j = i+1 ; j<m ; j++)
                {
                    if(vec1[i] + vec1[j] + vec1[k] == target)
                    {
                        count++;
                    }
                }
            }
        }
        cout<<count<<endl;
    }

    return 0;
}
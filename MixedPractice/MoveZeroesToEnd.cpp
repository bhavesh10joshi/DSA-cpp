#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;
        vector<int>vec;
        vector<int>ans;

        for(int j = 0 ; j<no ; j++)
        {
            int a;
            cin>>a;
            vec.push_back(a);
            if(a != 0)
            {
                ans.push_back(a);
            }
        }
        int j = 1 , diff = vec.size() - ans.size();

        while(j<=diff)
        {
            ans.push_back(0);
            j++;
        }

        for(int k = 0 ; k<ans.size() ; k++)
        {
            cout<<ans[k]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
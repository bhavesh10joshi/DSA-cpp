#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n1 , n2;
    cin>>n1>>n2;
    vector<int>vec1;
    vector<int>vec2;
    vector<int>ans;

    for(int i = 0 ; i<n1 ; i++)
    {
        int no;
        cin>>no;
        vec1.push_back(no);
    }
    for(int i = 0 ; i<n2 ; i++)
    {
        int no;
        cin>>no;
        vec2.push_back(no);
    }
    for(int i = 0 ; i<n1; i++)
    {
        for(int j = 0 ; j<n2 ; j++)
        {
            if(vec1[i] == vec2[j])
            {
                vec2.erase(vec2.begin() + j);
                j--;
            }
        }
        ans.push_back(vec1[i]);
        for(int k = i+1 ; k<n1 ; k++)
        {
            if(vec1[i] == vec1[k])
            {
                vec1.erase(vec1.begin() + k);
                k--;
            }
        }
        vec1.erase(vec1.begin() + i);
        i--;
    }
    for(int i = 0 ; i<ans.size() ; i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
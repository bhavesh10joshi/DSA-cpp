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
    int i = 0 , j = 0;
    
    while(i<vec1.size() && j<vec2.size())
    {
        if(vec1[i] <= vec2[j])
        {
            ans.push_back(vec1[i]);
            i++;
        }
        else
        {
            ans.push_back(vec2[j]);
            j++;
        }
    }
    while(i<=vec1.size()-1)
    {
        ans.push_back(vec1[i]);
        i++;
    }
    while(j<=vec2.size()-1)
    {
        ans.push_back(vec2[j]);
        j++;
    }

    for(int k = 0 ; k<ans.size() ; k++)
    {
        cout<<ans[k]<<" ";
    }

    return 0;
}
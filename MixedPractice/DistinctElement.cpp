#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>ans;

    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;
        ans.push_back(no);
    }

    sort(ans.begin() , ans.end());

    bool flag = false;
    int i = ans.size()-1;

    while(!flag && i>=1)
    {
       if(ans[i] == ans[i-1])
       {
        i--;
       }
       else
       {
        i--;
        flag=true;
       }
    }
    if(flag)
    {
        cout<<ans[i]<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
    return 0;
}
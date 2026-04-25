#include<iostream>
#include<vector>
using namespace std;
int main()
{   
    int n;
    vector<int>vec;
    bool flag = true;
    cin>>n;

    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;
        vec.push_back(no);
        if(i>0)
        {
            if(vec[i] != vec[i-1])
            {
                flag=false;
            }
        }
    }

    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
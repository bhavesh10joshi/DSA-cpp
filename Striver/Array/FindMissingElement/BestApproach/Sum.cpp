#include<bits/stdc++.h>
using namespace std;
int Missing(vector<int>vec)
{
    int n = vec.size();
    int sum = ((n+1)*n)/2;

    int ans = 0;
    for(int i = 0 ; i<n ; i++)
    {
        ans = ans + vec[i];
    }
    return sum - ans;   
}
int main()
{
    vector<int>vec;
    int n ;
    cin>>n;
    for(int i = 0 ; i<=n-1 ; i++)
    {
        int no;
        cin>>no;
        vec.push_back(no);
    }
    cout<<"The missing no is "<<Missing(vec)<<endl;


    return 0;
}
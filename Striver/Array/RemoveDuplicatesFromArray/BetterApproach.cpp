#include<bits/stdc++.h>
using namespace std;
int RemoveDupli(vector<int>&vec)
{
    int unique = vec[0] , j=1;
    for(int i = 1; i<vec.size(); i++)
    {
        if(vec[i] != unique)
        {
            unique = vec[i];
            vec[j] = unique;
            j++;
        }
    }
    return j;
}
int main()
{
    vector<int>vec;
    int n;
    cin>>n;
    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;
        vec.push_back(no);
    }
    cout<<"The answer is"<<RemoveDupli(vec)<<endl;
    for(int i = 0 ; i<n ; i++)
    {
        cout<<vec[i]<<" ";
    }
    return 0;
}
// 7
// 1
// 1
// 2
// 2
// 2
// 3
// 3
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    vector<long long int>vec;
    vector<long long int>p;
    for(long long int i = 0 ; i<n ; i++)
    {
        long long int no;
        cin>>no;
        vec.push_back(no);
    }
    long long int sum = 0;
    for(long long int i = 0 ; i<n ; i++)
    {
        sum = sum + vec[i];
        p.push_back(sum);
    }
    long long int no;
    cin>>no;
    for(long long int i = 0 ; i<no ; i++)
    {
        long long int k,l;
        cin>>k>>l;
        l--;
        k--;

        if(k == 0)
        {
            cout<<p[l]<<endl;
        } 
        else
        {
            cout<<p[l]-p[k-1]<<endl;
        }
    }
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long int n ;
    cin>>n;
    vector<long long int>vec;
    for(long long int i = 0 ; i<n ; i++)
    {
        long long int no;
        cin>>no;
        vec.push_back(no);
    }
    long long int no;
    cin>>no;
    for(long long int i = 0 ; i<no ; i++)
    {
        long long int k,l;
        cin>>k>>l;
        long long int sum = 0;
        for(long long int j = k-1 ; j<l ; j++)
        {
            sum = sum + vec[j]; 
        }
        cout<<sum<<endl;
    }
    return 0;
}

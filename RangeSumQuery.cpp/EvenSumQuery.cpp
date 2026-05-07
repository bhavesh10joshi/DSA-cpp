#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    vector<long long int>vec;
    vector<long long int>p;
    long long int sum = 0;
    for(long long int i = 0 ; i<n ; i++)
    {
        long long int no;
        cin>>no;
        vec.push_back(no);
        if((i+1)%2 == 0)
        {
            sum = sum + no;
            p.push_back(sum);
        }
        else
        {
            p.push_back(sum);
        }
    }
    long long int no;
    cin>>no;

    for(long long int i = 0 ; i<no ; i++)
    {
        long long int l,k;
        cin>>l>>k;

        if(l == 1)
        {
            cout<<p[k-1]<<endl;
        }
        else
        {
            cout<<p[k-1]-p[l-2]<<endl;
        }
    }


    return 0;
}
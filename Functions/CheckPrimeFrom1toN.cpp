#include<iostream>
using namespace std;
bool Check(long long int n)
{
    long long int half = n/2;
    for(int i = 2 ; i<=half ; i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    if(n<2)
    {
        return false;
    }
    return true;
}
int main()
{
    long long int n;
    cin>>n;
    for(long long int i = 2 ; i<=n ; i++)
    {
        if(Check(i))
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
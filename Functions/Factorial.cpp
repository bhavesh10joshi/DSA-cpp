#include<iostream>
using namespace std;
long long int facto(long long int n)
{
    if(n == 0)
    {
        return 1;
    }
    long long int val = 1;
    for(long long int i = 1 ; i<=n ; i++)
    {
        val = val*i;
    }
    return val;
}
int main()
{
    long long int n;
    cin>>n;
    cout<<facto(n)<<endl;
    return 0;
}
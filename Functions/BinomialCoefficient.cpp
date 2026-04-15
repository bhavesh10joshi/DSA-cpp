#include<iostream>
using namespace std;
int facto(int n)
{
    int val = 1;
    for(int i = n ; i>=1 ; i--)
    {
        val = val*i;
    }
    return val;
}
int Binomial(int n  , int r)
{
    int cal = facto(n)/(facto(r)*facto(n-r));
    return cal;
}
int main()
{
    int n , r;
    cin>>n>>r;

    cout<<Binomial(n , r);

    return 0;
}
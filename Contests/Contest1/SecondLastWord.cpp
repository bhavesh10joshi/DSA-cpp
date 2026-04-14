#include<iostream>
using namespace std;
int main()
{
    int n , q , ans;
    cin>>n;
    q=n;
    for(int i = 1 ; i <= 2 ; i++)
    {
        ans = q%10;
        q = q/10;
    }
    cout<<ans;

    return 0;
}
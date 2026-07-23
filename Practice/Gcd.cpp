#include<iostream>
using namespace std;
// Using Eucliadian Algo to solve this
int Gcd(int a , int b)
{
    if(a == 0)
    {
        return b;
    }
    Gcd(max(a,b) - min(a,b) , min(a,b));
} 
int main()
{
    int n,m;
    cin>>n>>m;
    // cin>>n>>m;
    // int gcd = 1;
    // for(int i = 1 ; i*i<=n && i*i<=m ; i++)
    // {
    //     if(n%i == 0 && m%i == 0)
    //     {
    //         gcd = i;
    //     }
    // }
    // cout<<gcd<<endl;
    cout<<"Gcd is "<<Gcd(n,m)<<endl;
    return 0;
}
#include<iostream>
using namespace std;
// int Facto(int n , int m)
// {
//     if(n == 0)
//     {
//         return m;
//     }
//     m = m*n;
//     n=n-1;
//     Facto(n , m);
// }
int main()
{
    long long int n,m;
    cin>>n>>m;

    // int val1 = Facto(n , 1);
    // int val2 = Facto(m , 1);

    // if(val1 == val2)
    // {
    //     cout<<"Yes"<<endl;
    // }
    // else
    // {
    //     cout<<"No"<<endl;
    // }

    if((n==0 && m==1) || (n==1 && m == 0) || (n == m))
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}
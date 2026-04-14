#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int q=n , rem=0;
    int count=0;
    while(q != 0)
    {
        rem=q%10;
        if(rem == 0)
        {
            count++;
        }
        q=q/10;
    }
    if(n != 0)
    {
        cout<<count<<endl;
    }
    else
    {
        cout<<1<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int q = n;
    for(int i = 1 ; q>i ; i++)
    {
        if(n%i == 0)
        {
            if(n/i == i)
            {
                    q=n/i;
                    cout<<i<<" ";
                    continue;
            }
            cout<<i<<" "<<n/i<<" ";
            q=n/i;
        }
    }
    return 0;
}
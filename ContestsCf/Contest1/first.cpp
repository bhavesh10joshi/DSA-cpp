#include<iostream>
using namespace std;
int main()
{
    long long int n1;
    cin>>n1;
    for(long long int i = 0 ; i<n1 ; i++)
    {
        long long int n,m;
        cin>>n>>m;
        bool check = false;
        for(long long int j = n+1 ; j<m/2 ; j++)
        {
            if(m%n != 0 && m>n)
            {
                break;
            }
            if(j%n == 0 && m%j != 0)
            {
                check = true;
                break;
            }
        }
        if(check)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    

    return 0;
}
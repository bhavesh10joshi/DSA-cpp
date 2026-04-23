#include<iostream>
using namespace std;
int main()
{
    long long int n1;
    cin>>n1;

    for(long long int i = 0 ; i<n1 ; i++)
    {
        long long int n , x , a;
        cin>>n>>x;
        for(long long int j = 2 ; j<=x ; j++)
        {
            long long int l = j , ans=j;
            for(long long int k = 1 ; k<=x ; k++)
            {
                ans = ans^k;
            }
            if(ans == 0)
            {
                a = j;
                break;
            }
        }
        cout<<a<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    long long int n , count=0;
    cin>>n;

    for(long long int i = 0 ; i<n ; i++)
    {
        long long int n1;
        cin>>n1;
        if(n1 != 0)
        {
            if(18%n1 == 0 || n1%45 == 0)
            {
                count++;
            }
        }
        else
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
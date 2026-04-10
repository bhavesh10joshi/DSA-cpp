#include<iostream>
using namespace std;
int main()
{
    long long int n , x;
    cin>>x>>n;
    int val = x , count = 0;
    if(n<0)
    {
        val = 1/x;
        n = n*(-1);
    }
    if(n != 0)
    {
        long long int temp = 1;
        while(count <= n-1)
        {
            temp = temp*val;
            count++;
        }
        cout<<temp;
    }
    else
    {
        cout<<1<<endl;
    }
    return 0;
}
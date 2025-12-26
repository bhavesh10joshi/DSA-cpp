#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count = 0 , q = 1 , n1 = n;
    while(n1 != 0)
    {
        n1 = n1/10;
        count++;
    }
    cout<<count;
    return 0;
}
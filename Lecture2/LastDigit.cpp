#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int j = n;
    while(j>=10)
    {
        j=j%10;
    }
    cout<<j<<endl;
    return 0;
}
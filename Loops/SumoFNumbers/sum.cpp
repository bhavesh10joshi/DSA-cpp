#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum = 0 , q=n ;
    while(q != 0)
    {
        sum = sum + (q%10);
        q=q/10;
    }
    cout<<"sum is "<<sum<<endl;
    return 0;
}
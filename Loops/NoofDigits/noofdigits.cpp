#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count = 0 , q=n;
    while(q != 0)
    {
        count++;
        q=q/10;
    }
    cout<<"count is "<<count<<endl;
    return 0;

    return 0;
}
#include<iostream>
using namespace std;
int main()
{
int count ;
int n ;
cin>>n;
for(int i = 0 ; i <= n ; i++)
{
    count = i ;
    for(int j = 0 ; j < i ; j++)
    {
        cout<<" "<<count<<" ";
        count--;
    }
    cout<<endl;
}

    return 0;
}
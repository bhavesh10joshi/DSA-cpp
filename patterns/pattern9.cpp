#include<iostream>
using namespace std;
int main()
{
char h = 'A' , count;
int n ;
cin>>n;
for(int i = 1 ; i <= n ; i++)
{
    count = h ;
    for(int j = 1 ; j <= n ; j++)
    {
        cout<<" "<<count<<" ";
        count++;
    }
    h++;
    cout<<endl;
}

    return 0;
}
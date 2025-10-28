#include<iostream>
using namespace std;
int main()
{
char h = 'A' , count;
int n ;
cin>>n;
for(int i = 0 ; i < n ; i++)
{
    count = h ;
    for(int j = 0 ; j < n ; j++)
    {
        cout<<" "<<count<<" ";
        count++;
    }
    cout<<endl;
}

    return 0;
}
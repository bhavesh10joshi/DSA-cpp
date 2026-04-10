#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int i = 1 , j = 1;
    while(i<=m)
    {
        j=1;
        while(j <= n)
        {
            cout<<"*";
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}
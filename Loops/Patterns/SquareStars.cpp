#include<iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;
    int i = 1 , j = 1;
    while(i<=m)
    {
        j=1;
        while(j <= m)
        {
            cout<<"*";
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int m , n;
    cin>>m>>n;
    int i = 1 , j = 1;
    while(i<=m)
    {
        j=1;
        if(i == 1 || i == m)
        {
            while(j <= n)
            {
                cout<<"*";
                j++;
            }
        }
        else
        {
            while(j <= n)
            {
                if(j == 1 || j == n)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
                j++;
            }
        }
        i++;
        cout<<endl;
    }
    return 0;
}
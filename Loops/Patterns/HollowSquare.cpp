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
        if(i == 1 || i == m)
        {
            while(j <= m)
            {
                cout<<"*";
                j++;
            }
        }
        else
        {
            while(j <= m)
            {
                if(j == 1 || j == m)
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
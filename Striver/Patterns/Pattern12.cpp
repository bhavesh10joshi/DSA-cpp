#include<iostream>
using namespace std;
int main()
{
    int n , store;
    cin>>n;

    for(int i = 0 ; i<n ; i++)
    {
        if(i%2 == 0)
        {
            store=1;
        }
        else
        {
            store=0;
        }
        for(int j = 0 ; j<=i ; j++)
        {
            if(j>0)
            {
                if(store)
                {
                    store=0;
                }
                else
                {
                    store=1;
                }
            }
            cout<<store<<" ";
        }
        cout<<endl;
    }
}
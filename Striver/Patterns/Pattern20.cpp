#include<iostream>
using namespace std;
int main()
{
    //1st part
    int n;
    cin >>n;
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = n-1 ; j >= 0 ; j--)
        {
            if(j>=i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        for(int j = 0 ; j<n ; j++)
        {
            if(j >= i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(j<=i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        for(int j = n-1 ; j>=0 ; j--)
        {
            if(j>i)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}
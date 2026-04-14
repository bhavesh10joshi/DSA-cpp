#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int no = n; 
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 1 ; j<=n ; j++)
        {
            if(j<no)
            {
                cout<<" ";
            }
            else
            {
                if(j == no || j == n)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
                if(j != n)
                {
                    cout<<" ";
                }
            }
        }
        cout<<endl;
        no--;
    }
    no++;
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 1 ; j<=n ; j++)
        {
            if(j<no)
            {
                cout<<" ";
            }
            else
            {
                if(j == no || j == n)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
                if(j != n)
                {
                    cout<<" ";
                }
            }
        }
        no++;
        cout<<endl;
    }
    return 0;
}
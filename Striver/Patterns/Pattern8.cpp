#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i = n-1 ; i>=0 ; i--)
    {
        for(int j = 0 ; j<n ; j++)
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
        for(int j = n-1 ; j>i ; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    } 
 
    return 0;
}
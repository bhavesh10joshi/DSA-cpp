#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i = n ; i>=1 ; i--)
    {
        for(int k = n ; k>=1 ; k--)
        {
            if(k>i)
            {
                cout<<" ";
            }
            else
            {
                break;
            }
        }
        for(int j = i ; j>=1 ; j--)
        {
            if(j == 1)
            {
                cout<<".";
            }
            else
            {
                cout<<". ";
            }
        }
        cout<<endl;
    }
    for(int i = n-2 ; i>=0 ; i--)
    {
        for(int j = 1 ; j<=i ; j++)
        {
            cout<<" ";
        }
        for(int k = n-i ; k>=1 ; k--)
        {
            if(k == 1)
            {
                cout<<".";
            }
            else{
                cout<<". ";
            }
        }
        cout<<endl;
    }
    return 0;
}
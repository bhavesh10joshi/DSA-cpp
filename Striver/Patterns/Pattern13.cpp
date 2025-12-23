#include<iostream>
using namespace std;
int main()
{
    int n , count = 1;

    cin>>n;
    for(int i = 0 ; i<n ; i++)
    {
        count = 1;
        for(int j = 0 ; j<n ; j++)
        {
            if(j<=i)
            {
                cout<<count;
            }
            else
            {
                cout<<" ";
            }
            count=count+1;
        }
        count = count-1;
        for(int j = n-1 ; j>=0 ; j--)
        {
            if(j>i)
            {
                cout<<" ";
            }
            else
            {
                cout<<count;
            }
            count=count-1;
        }
        cout<<endl;
    }
    return 0;
}
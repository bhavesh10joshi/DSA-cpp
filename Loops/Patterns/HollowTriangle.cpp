#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i = 1 , no = n;
    while(i<=n)
    {
        int j = 1;
        if(i != n)
        {        
            while(j<=n)
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
                j++;
            }
        }
        else
        {
            while(j <= n)
            {
                cout<<"* ";
            }
        }
        cout<<endl;
        no--;
        i++;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n , i = 1;
    cin>>n;
    while(i<=n)
    {
        int j = 1;
        while(j<=i)
        {
            if(j==1 || j==i)
            {
                cout<<"* ";
            }
            else
            {
                cout<<" ";
            }
            j++;
        }
        cout<<endl;
        i++;
    }
    i = i-2;
    while(i>=1)
    {
        int j = 1;
        while(j<=i)
        {
            if(j == 1 || j == i )
            {
                cout<<"* ";
            }
            else
            {
                cout<<" ";
            }
            j++;
        }
        cout<<endl;
        i--; 
    }
    return 0;
}
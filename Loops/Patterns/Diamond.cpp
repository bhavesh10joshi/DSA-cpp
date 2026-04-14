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
                cout<<"* ";
            }
        }
        cout<<endl;
        no--;
    }
    no++;
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j<n ; j++)
        {
            if(j<no)
            {
                cout<<" ";
            }
            else
            {
                cout<<"* ";
            }
        }
        no++;
        cout<<endl;
    }
    return 0;
}

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
        while(j<=n)
        {
            if(j<no)
            {
                cout<<" ";
            }
            else
            {
                cout<<"* ";
                if(j != n)
                {
                    cout<<" ";
                }
            }
            j++;
        }
        cout<<endl;
        no--;
        i++;
    }
    return 0;
}
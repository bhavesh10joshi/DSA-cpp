#include<iostream>
using namespace std;
int main()
{
    int n;
    bool flag = false; 
    cin>>n;

    for(int i = 1 ; i<=n ; i++)
    {
        if(n%i == 0)
        {
            if(i%10 == 2 || i%10 == 7)
            {
                flag = true; 
                cout<<i<<" ";
            }
        }
    }
    if(!flag)
    {
        cout<<"-1"<<endl;
    }
    return 0;
}
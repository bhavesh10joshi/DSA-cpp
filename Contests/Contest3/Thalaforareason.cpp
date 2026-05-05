#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i = 0 ; i<n ; i++)
    {
        int m;
        cin>>m;

        int q = m , r = 0 , sum = 0;
        
        while(q != 0)
        {
            r = q%10;
            q = q/10;
            sum = sum + r;
        }
        if(sum == 7)
        {
            cout<<"Thala for a reason"<<endl;
        }
        else
        {
            cout<<"Blocked for no reason"<<endl;
        }
    }

    return 0;
}
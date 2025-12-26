#include<iostream>
using namespace std;
int main()
{
    long long int n ;
    cin>>n;
    if(n<0)
    {
        cout<<"No it is not !"<<endl;
    }
    else
    {
        long long int q = n, rev = 0 , r;
        while(q != 0)
        {
            r = q%10;
            q = q/10;
            rev = (rev*10) + r;      
        }
        if(rev == n)
        {
            cout<<"yes it is !"<<endl;
        }
        else
        {
            cout<<"No it is not!"<<endl;
        }
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i = 2 ; i <= n/2 ; i++)
    {
        if(n%i == 0)
        {
            cout<<"Not a Prime Number"<<endl;
            break;
        }
        else if(i == n/2)
        {
            cout<<"is a prime number"<<endl;
        }
    }
    return 0;
}
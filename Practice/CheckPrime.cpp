#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool isPrime = true; 

    for(int i = 2 ; i*i<=n ; i++)
    {
        if(n%i == 0)
        {
            cout<<"Not a prime"<<endl;
            isPrime=false;
            break;
        }
    }
    if(isPrime)
    {
        cout<<"Is a prime no "<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int half = n/2;
    bool check = true;
    for(long long int i = 2 ; i<=half ; i++)
    {
        if(n%i == 0)
        {
            cout<<"Not Prime"<<endl;
            check = false;
            break;
        }
    }
    if(check && n>=2)
    {
        cout<<"Prime"<<endl;
    }
    else if(n<=2)
    {
        cout<<"Not Prime"<<endl;
    }
    
    return 0;
}
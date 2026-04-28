#include<iostream>
#include<string>
using namespace std;
int main()
{
    string n;
    cin>>n;

    char x;
    cin>>x;

    for(int i = 0 ; i<n.length() ; i++)
    {
        if(n[i] != x)
        {
            cout<<n[i];
        }
    }
    return 0;
}
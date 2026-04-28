#include<iostream>
#include<string>
using namespace std;
int main()
{
    string n;
    getline(cin , n);

    for(long long int i = 0 ; i<n.length() ; i++)
    {
        long long int no = int(n[i]);
        if(no != 32)
        {
            cout<<n[i];
        }
    }

    return 0;
}
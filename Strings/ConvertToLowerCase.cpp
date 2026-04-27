#include<iostream>
using namespace std;
int main()
{
    char n;
    cin>>n;

    int m = int(n);

    if(m>=97 && m<=122)
    {
        cout<<n<<endl;
    }
    else
    {
        m = m+32;
        cout<<char(m)<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    char m;
    cin>>m;
    int n = int(m);
    if(n>=48 && n<=57)
    {
        cout<<"Digit"<<endl;
    }
    else if(n>=65 && n<=90)
    {
        cout<<"Uppercase"<<endl;
    }
    else if(n>=97 && n<=122)
    {
        cout<<"Lowercase"<<endl;
    }
    else
    {
        cout<<"Special"<<endl;
    }
    return 0;
}
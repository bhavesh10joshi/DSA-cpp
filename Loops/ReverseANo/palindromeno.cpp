#include<iostream>
using namespace std;
int main()
{
    long long int no;
    cin>>no;
    int n , rev = 0;
    n = no;
    while(no != 0)
    {
        rev = (rev*10) + (no%10);
        no = no/10;
    }

    if(rev == n)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a , b;
    cin>>a>>b;
    int rem = 10;
    int sum = 0;
    while(rem>=10)
    {
        rem = a%10;
    }
    sum = sum + rem;
    rem = 10;
    while(rem>=10)
    {
        rem = b%10;
    }
    sum = sum + rem;
    cout<<sum<<endl;    
    return 0;   
}
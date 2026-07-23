#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int N = n;
    int newNum = 0;

    while(N>0)
    {
        int Rem = N%10;
        N = N/10;
        newNum = (newNum*10)+Rem;  
    }

    if(newNum == n)
    {
        cout<<"It is palindrome"<<endl;
    }
    else
    {
        cout<<"It is not palindrome"<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int N = n;
    int sum = 0;

    while(N>0)
    {
        int Rem = N%10;
        N = N/10;
        sum = (Rem*Rem*Rem)+sum;  
    }

    if(sum == n)
    {
        cout<<"It is Armstrong"<<endl;
    }
    else
    {
        cout<<"It is not Armstrong"<<endl;
    }
    return 0;
}
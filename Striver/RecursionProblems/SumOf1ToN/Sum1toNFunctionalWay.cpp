#include<iostream>
using namespace std;
int Sum(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return n + Sum(n-1);
}
int main()
{
    int n;
    cin>>n;
    int sum = Sum(n);
    cout<<"The Sum is "<<sum<<endl;
    return 0;
}
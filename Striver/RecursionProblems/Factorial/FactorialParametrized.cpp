#include<iostream>
using namespace std;
int Factorial(int i , int n)
{
    if(n == 0)
    {
        return i;
    }
    else
    {
        Factorial(i*n , n-1);
    }
}
int main()
{
    int n;
    cin>>n;
    int Facto = Factorial(1 , n);
    cout<<Facto<<endl;
    return 0;
}
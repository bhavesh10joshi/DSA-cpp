#include<iostream>
using namespace std;
int FiboNacci(int n)
{
    if(n<=1)
    {
        return n;
    }
    return FiboNacci(n-1)+FiboNacci(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<"Ans is : "<<FiboNacci(n)<<endl;
    return 0;
}
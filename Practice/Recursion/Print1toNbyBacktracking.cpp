#include<iostream>
using namespace std;
void print(int a , int t)
{
    if(a > t)
    {
        return;
    }
    print(a+1 , t);
    cout<<a<<" ";
}
int main()
{
    int n;
    cin>>n; 
    print(1 , n);
    return 0; 
}
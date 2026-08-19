#include<iostream>
using namespace std;
int facto(int ans , int n)
{
    if(n == 1)
    {
        return ans*n;
    }
    facto( ans*n , n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<"Ans is : "<<facto(1,n)<<endl;
    return 0;
}
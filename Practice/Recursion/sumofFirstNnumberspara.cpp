#include<iostream>
using namespace std;
int sum(int n , int count)
{
    if(n<=0)
    {
        return count;
    }
    count = count + n;
    sum(n-1 , count);
} 
int main()
{
    int n;
    cin>>n;

    int ans  = sum(n , 0);
    cout<<"Ans is : "<<ans<<endl;
    return 0;
}
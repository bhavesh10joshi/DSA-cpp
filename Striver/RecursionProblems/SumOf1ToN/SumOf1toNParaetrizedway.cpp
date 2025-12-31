#include<iostream>
using namespace std;
// int Sum(int n , int sum , int count)
// {
//     if(count > n)
//     {
//         return sum;
//     }
//     else
//     {
//         Sum(n , sum + count , count+1);
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int sum = Sum(n , 0 , 1);
//     cout<<sum<<endl;
//     return 0;
// }
int Sum(int i , int sum)
{
    if(i <= 0)
    {
        return sum;
    }
    else
    {
        Sum( i-1 , sum+i);
    }
}
int main()
{
    int n;
    cin>>n;
    int sum = Sum(n , 0);
    cout<<sum<<endl;
    return 0;
}
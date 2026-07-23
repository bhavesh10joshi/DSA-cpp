#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int N = n;
    // bool start = true;
    // while(N>0)
    // {
    //     int rem = N%10;
    //     N = N/10;
    //     if(rem != 0 && start)
    //     {
    //         start = false;
    //     } 
    //     if(rem != 0 || !start)
    //     {
    //         cout<<rem;
    //     } 
    // }
    int newNum = 0;
    while(N>0)
    {
        int rem = N%10;
        N = N/10;
        newNum = (newNum*10)+rem;
    }  
    cout<<newNum<<endl;
    return 0;
}
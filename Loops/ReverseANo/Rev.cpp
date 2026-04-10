#include<iostream>
using namespace std;
int  main()
{
    // int n;
    // cin>>n;
    // int rev=0 , q=n;
    // while(q!=0)
    // {
    //     rev = (rev*10)+(q%10);
    //     q = q/10; 
    // }  
    // cout<<"Reverse number is "<<rev<<endl;
    // return 0; 
    long long int n;
    cin>>n;
    if(n == 0)
    {
        cout<<0;
    }
    while(n != 0)
    {
        cout<<n%10;
        n = n/10;
    }
}
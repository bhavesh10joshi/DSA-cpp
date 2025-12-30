#include<bits/stdc++.h>
using namespace std;
int gcd(int n1 , int n2)
{
    if(n1 == 0)
    {
        return n2;
    }
    else if(n2 == 0)
    {
        return n1;
    }

    // if(n1>=n2)
    // {
    //     gcd(n1-n2 , n2);
    // }
    // else 
    // {
    //     gcd(n2-n1 , n1);
    // }
    // whyi commented it :- because it is taking a lot amount of steps therefore instead of minus we can replace it with divide instead !
    if(n1>=n2)
    {
        gcd(n1%n2 , n2);
    }
    else 
    {
        gcd(n2%n1 , n1);
    }
    return 0;
}
int main()
{   
    int n1 , n2;
    cin>>n1>>n2;
    int ans = gcd(n1,n2);

    cout<<"The required ans is "<<ans<<endl;
    return 0;
}
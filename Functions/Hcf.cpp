#include<iostream>
using namespace std;
int main()
{
    long long int q , n1 , n2 , gd=1;
    cin>>n1>>n2;

    if(n1<=n2)
    {
        q = n1;
    }
    else{
        q = n2;
    }
    
    for(long long int i = 1 ; i<=q ; i++)
    {   
        if(n1%i == 0 && n2%i == 0)
        {
            gd = i;
        }
    }
    cout<<gd;
    return 0;
}
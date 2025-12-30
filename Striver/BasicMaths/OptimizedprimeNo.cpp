#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n , count = 0;
    cin>>n;
    for(int i = 1 ; i <= sqrt(n) ; i++)
    {
        if(n%i == 0)
        {
            count++;
            if(n/i != i)
            {
                count++;
            }
        }
        if(count > 2)
        {
            break;
        }
    }
    if(count > 2)
    {
        cout<<"Not a prime Number !";
    }
    else{
        cout<<"Is a prime number";
    }
    return 0;
}
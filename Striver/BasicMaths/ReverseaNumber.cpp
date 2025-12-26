#include<iostream>
using namespace std;
int main()
{
    int n , rev = 0 , r;
    cin>>n;
    int q = n;
    while(q != 0)
    {
        r = q%10;
        q = q/10;
        rev = (rev*10) + r; 
        cout<<rev<<endl;    
    }
    cout<<rev;
}
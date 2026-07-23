#include<cmath>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    // int N = n;
    int count = 0;

    // while(N>0)
    // {
    //     count++;
    //     N = N/10;
    // }

    // Shortcut is to use Log10
    count = int(log10(n)+1);
    cout<<count<<endl;
    return 0;
}
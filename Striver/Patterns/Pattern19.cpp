#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >>n;
    char letter = 'A' + (n-1);

    for(int i = 0 ; i<n ; i++)
    {
        char newletter = letter;
        newletter = newletter - i;
        for(int j = 0 ; j<=i ; j++)
        {
            cout<<newletter;
            newletter = newletter + 1;
        }
        cout<<endl;
    }
    return 0;
}
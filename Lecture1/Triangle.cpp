#include<iostream>
using namespace std;
int main()
{
    int times = 5;
    for(int i = times ; i>0 ; i--)
    {
        for(int j = 0 ; j<i ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
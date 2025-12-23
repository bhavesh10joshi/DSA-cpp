#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;

    char letter = 'A';
    for(int i = n-1 ; i>=0 ; i--)
    {
        letter = 'A';
        for(int j = 0 ; j<=i ; j++)   
        {
            cout<<letter<<" ";
            letter = letter + 1;
        }    
        cout<<endl;
    }
    return 0;
}
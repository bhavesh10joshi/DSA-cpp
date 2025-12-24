#include<iostream>
using namespace std;
int main()
{
    int n;
    char letter;
    cin>>n;
    for(int i = 0 ; i<n ; i++)
    {
        letter = 'A';
        for(int j = n-1 ; j>=0 ; j--)
        {
            if(j>i)
            {
                cout<<" ";
            }
            else
            {
                cout<<letter;
                letter = letter + 1;
            }
        }
        letter = letter - 1;
        for(int j = 0 ; j<n ; j++)
        {
            if(j<i)
            {
                letter = letter - 1;
                cout<<letter;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
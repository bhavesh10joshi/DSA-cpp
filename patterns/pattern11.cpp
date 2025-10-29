#include<iostream>
using namespace std;
int main()
{
    char h = 'A';
    int n ;
    cin>>n ; 
    h = h + (n-1);
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j<=i ; j++)
        {
            cout<<" "<<h<<" ";
            if(j!=i)
            {
                h++;
            }
        }
        h--;
        cout<<endl;
    }
    return 0;
}
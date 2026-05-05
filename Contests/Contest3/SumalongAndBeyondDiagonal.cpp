#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    int nondiagonalsum = 0 , diagonalsum = 0;
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j<n ; j++)
        {
            int no;
            cin>>no;
            arr[i][j] = no; 
            if(i == j || i+j == (no-1))
            {
                diagonalsum = diagonalsum + no;
            }
            else 
            {
                nondiagonalsum = nondiagonalsum + no;
            }
        }
    }
    if(n%2 != 0)
    {
        int m = ((n-1)/2);
        diagonalsum = diagonalsum - arr[m][m];
    }
    cout<<diagonalsum<<" "<<nondiagonalsum<<endl;
    return 0;
}
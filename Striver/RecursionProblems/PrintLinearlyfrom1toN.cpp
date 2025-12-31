#include<iostream>
using namespace std;
void print(int n , int count)
{
    if(count > n){
        return;
    }
    else
    {
        cout<<count<<" ";
        count++;
        print(n , count); 
    }
}
int main()
{
    int n , count = 0;
    cin>>n;
    print(n , count);
    return 0;
}
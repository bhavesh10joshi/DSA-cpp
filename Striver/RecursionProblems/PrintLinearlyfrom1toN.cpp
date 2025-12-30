#include<iostream>
using namespace std;
int count = 1;
void print(int n)
{
    if(count > n){
        return;
    }
    else
    {
        cout<<count<<" ";
        count++;
        print(n); 
    }
}
int main()
{
    int n;
    cin>>n;
    print(n);
    return 0;
}
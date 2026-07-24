#include<iostream>
using namespace std;
void print(int a , int t){
    if(a > t)
    {
        return;
    }
    cout<<a<<" ";
    a++;
    print(a , t);
}
int main()
{
    int n;
    cin>>n;
    print(1 , n);
    return 0;   
}

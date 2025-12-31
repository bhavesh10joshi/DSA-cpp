#include<iostream>
using namespace std;
void BPrint(int n , int count)
{
    if(count>=n)
    {
        return;
    }
    else
    {
        BPrint(n , count+1);
        cout<<count<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    BPrint(n , 1);
    return 0;
}
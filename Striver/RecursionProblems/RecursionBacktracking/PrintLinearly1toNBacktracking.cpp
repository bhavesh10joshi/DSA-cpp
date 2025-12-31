#include<iostream>
using namespace std;
void BPrint(int count)
{
    if(count<=0)
    {
        return;
    }
    else
    {
        BPrint(--count);
        cout<<count<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    BPrint(n);
    return 0;
}
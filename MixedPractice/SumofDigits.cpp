#include<iostream>
#include<string>
using namespace std;
int main()
{
    string n;
    cin>>n;
    int sum = 0;
    for(int i = 0 ; i<n.length() ; i++)
    {
        int no = (int(n[i]))-48;
        sum = sum + no;
    }

    cout<<sum<<endl;
    return 0;
}
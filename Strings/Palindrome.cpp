#include<iostream>
#include<string>
using namespace std;
int main()
{
    string n;
    cin>>n;
    bool flag = true;
    for(int i = 0 , j = n.length()-1 ; i<=j ; i++ , j--)
    {
        if(n[i] != n[j])
        {
            flag = false;
            break;
        }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
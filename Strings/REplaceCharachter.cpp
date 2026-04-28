#include<iostream>
#include<string>
using namespace std;
int main()
{
    string n;
    cin>>n;
    
    char n1,n2;
    cin>>n1>>n2;

    for(int i = 0 ; i<n.length() ; i++)
    {
        if(n[i] == n1)
        {
            n[i] = n2;
        }
    }

    cout<<n<<endl;

    return 0;
}
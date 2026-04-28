#include<iostream>
#include<string>
using namespace std;
int main()
{
    string n;
    cin>>n;

    for(int i = 0 , j=n.length()-1 ; i<=j ; i++,j--)
    {
        swap(n[i] , n[j]);
    }

    cout<<n<<endl;
    return 0;
}
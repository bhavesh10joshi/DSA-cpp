#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;


    if(s[0] == s[3] && s[1] == s[4])
    {
        cout<<"Mogambo is happy"<<endl;
    }
    else
    {
        cout<<"Mogambo is sad"<<endl;
    }


    return 0;
}
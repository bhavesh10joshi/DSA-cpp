#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int counta = 0 , countb = 0;

    for(int i = 0 ; i<s.length() ; i++)
    {
        int a = int(s[i]);

        if(a == 97)
        {
            counta++;
        }
        else if(a == 98)
        {
            countb++;
        }
    }
    if(counta == countb)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
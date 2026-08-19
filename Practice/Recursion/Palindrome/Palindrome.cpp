#include<iostream>
#include<string>
using namespace std;
bool CheckPalindrome(int i , string& s)
{
    if(i>=s.length()/2)
    {
        return true;
    }
    if(s[i] == s[s.length()-i-1])
    {
        CheckPalindrome(i+1 , s);
    }
    else
    {
        return false;
    }
}
int main()
{
    cout<<"Enter the string : "<<endl;
    string Str;
    cin>>Str;

    if(CheckPalindrome(0 , Str))
    {
        cout<<"It is Palindrome !"<<endl;
    }
    else
    {
        cout<<"Not a palindrome"<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
bool check(int i , string& str){
    if(i >= str.length()/2)
    {
        return true;
    }
    else
    {
        if(str[i] != str[(str.length())-i-1])
        {
            return false;
        }
        return check(i+1 , str);
    }
}
int main()
{
    string str;
    cin>>str;
    cout<<check(0 , str)<<endl;
    return 0;
}
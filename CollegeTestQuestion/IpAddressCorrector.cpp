#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;

    string op = "";

    int i = 0;
    while(i<str.length())
    {
        if(str[i] == '.' && i+1 != str.length()-1)
        {
            op.push_back(str[i]);
            int j = i+1;
            while(j != str.length()-1 && str[j] == '0')
            {
                i++;
                j++;
            }
            op.push_back(str[i]);
            continue;
        }
        else
        {
            op.push_back(str[i]);
            i++;
        }
    }


    return 0;
}
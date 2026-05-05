#include<iostream>
#include<climits>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin , s);

    int max = INT_MIN;
    int count = 0 ;
    for(int i = 0 ; i<s.length() ; i++)
    {
        if(s[i] != ' ')
        {
            count++;
        }
        else if(s[i] == ' ')
        {
            if(max<=count)
            {
                max = count;
            }
            count = 0;
        }
        if(i == s.length()-1)
        {
            if(max<=count)
            {
                max = count;
            }
        }
    }

    cout<<max<<endl;
    return 0;
}
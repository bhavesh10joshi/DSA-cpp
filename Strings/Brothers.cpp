#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name1 , name2;
    getline(cin , name1);
    getline(cin , name2);

    int i = 0 , j = 0;
    for(; i<name1.length() ; i++)
    {
        int no = int(name1[i]);
        if(no == 32)
        {
            i++;
            break;
        }
    }
    for(; j<name2.length() ; j++)
    {
        int no = int(name2[j]);
        if(no == 32)
        {
            j++;
            break;
        }
    }
    bool flag = true;
    for(; j<name2.length() && i<name1.length() ; j++ && i++)
    {
        if(name1[i] != name2[j])
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
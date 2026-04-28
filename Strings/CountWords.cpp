#include<iostream>
#include<string>
using namespace std;
int main()
{
    string n;
    getline(cin , n);
    int count = 1;
    for(int i = 0 ; i<n.length() ; i++)
    {
        int no = int(n[i]);
        if(no == 32)
        {
            count++;
        } 
    }
    cout<<count<<endl;
    return 0;
}
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string n;
    cin>>n;

    for(int i = 0 ; i<n.length() ; i++)
    {
        int no = int(n[i]);
        if(n[i]>=65 && n[i]<=90)
        {
            no = no+32;
            n[i] = char(no);
        }
        else if(n[i]>=97 && n[i]<=122)
        {
            no = no - 32;
            n[i] = char(no); 
        }
    }
    cout<<n<<endl;
    return 0;
}
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string n;
    cin>>n;
    bool tflag = false , lflag = false , uflag = false , dflag = false , sflag = false;
    if(n.length() >= 10)
    {
        tflag = true;
        for(int i = 0 ; i<n.length() ; i++)
        {
            int no = int(n[i]);
            if(no>=97 && no<=122)
            {
                lflag = true;
            }
            else if(no>=65 && no<=90)
            {
                uflag = true;
            }
            else if(no>=48 && no<=57)
            {
                dflag = true;
            }
            else if((no>=32 && no<=47) || (no>=58 && no<=64) || (no>=91 && no<=96) || (no>=123 && no<=126))
            {
                sflag = true;
            }
            if(uflag && dflag && lflag && tflag && sflag)
            {
                cout<<"Strong"<<endl;
                break;
            }
        }
    }
    else
    {
        cout<<"Weak"<<endl;
    }

    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n , i=1 ,val, BitStore = 0;
    cin>>n;

    while(i <= n)
    {
        val = BitStore;
        int j = 1;
        while(j <= i)
        {
            if(!val)
            {
                cout<<val;
                val = 1;
            }
            else
            {
                cout<<val;
                val = 0;
            }
            j++;
        } 
        if(BitStore)
        {
            BitStore = 0;
        }
        else
        {
            BitStore = 1;
        }
        cout<<endl;
        i++;
    }


    return 0;
}
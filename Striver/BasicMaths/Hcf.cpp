#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1 , n2;
    cout<<"Enter the Required Number !"<<endl;
    cin>>n1>>n2;
    vector<int>store1;
    vector<int>store2;

    for(int i = 1 ; i <= sqrt(n1) ; i++)
    {
        if(n1%i == 0)
        {
            store1.push_back(i);
            if(n1/i != i)
            {
                store1.push_back(n1/i);
            }
        }
    }  
    for(int i = 1 ; i <= sqrt(n2) ; i++)
    {
        if(n2%i == 0)
        {
            store2.push_back(i);
            if(n2/i != i)
            {
                store2.push_back(n2/i);
            }
        }
    } 

    int greatest = 0 ;

    for(int i = 0 ; i < store1.size() ; i++)
    {
       for(int j = 0 ; j < store2.size() ; j++)
       {
            if(store1[i] == store2[j])
            {
                greatest = max(store1[i] , greatest);
            }
       }
    }
    cout<<greatest<<endl;
    return 0;
}
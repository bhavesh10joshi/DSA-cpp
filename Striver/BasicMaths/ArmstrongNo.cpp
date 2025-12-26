// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     long long int sum = 0 , q = n , r = 0 , no = 0;
//     while(q != 0)
//     {
//         q = q/10;
//         no++;
//     }
//     q = n;
//     while(q != 0) 
//     {
//         r = q%10;
//         q = q/10;
//         int p=1;
//         for(int i = 0 ; i<no ; i++)
//         {
//             p = p*r;
//         }
//         sum = sum + p;
//     }    
//     if(sum == n)
//     {
//         cout<<"true";
//     }
//     else
//     {
//         cout<<"false";
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>h;
    int n , q=0 , no = 0 , sum = 0;
    cin>>n;
    while(q != 0)
    { 
        h.push_back(q%10);
        q = q/10;
        no++;
        if(q == 0)
        {
            for(int i = 0 ; i < h.size() ; i++)
            {
                
            }
        }
    }


    return 0;

}
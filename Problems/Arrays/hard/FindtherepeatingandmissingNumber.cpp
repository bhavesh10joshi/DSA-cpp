#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    vector<int>vec;

    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;
        vec.push_back(no);
    }

    // Brute Force Approach
    // vector<int>ans;
    // int rep =  -1;
    // for(int i = 0 ; i<vec.size() ; i++)
    // {
    //     for(int j = i+1 ; j<vec.size() ; j++)
    //     {
    //         if(vec[i] == vec[j])
    //         {
    //             rep = vec[i];
    //             break;
    //         }
    //     }        
    // }

    // int sum = (vec.size()*(vec.size()+1))/2;

    // for(int i = 0 ; i<vec.size() ; i++)
    // {
    //     sum = sum-vec[i];
    // }

    // ans.push_back(rep);
    // ans.push_back(sum+rep);

    // for(int j = 0 ; j<ans.size() ; j++)
    // {
    //     cout<<ans[j]<<" ";
    // }

    // Better Approach
    // Using Maps
    // unordered_map<int,int>mp;
    // vector<int>ans;
    // int sum = (vec.size()*(vec.size()+1))/2;
    // int rep = -1;
    // for(int i = 0 ; i<vec.size() ; i++)
    // {
    //     sum = sum-vec[i]; 
    //     mp[vec[i]]++;
    //     if(mp[vec[i]]>1)
    //     {
    //         rep = vec[i];
    //     }
    // }
    // ans.push_back(rep);
    // ans.push_back(sum+rep);

    // using hashing 
    // vector<int>arr(vec.size() , 0);
    // vector<int>ans;

    // for(int i = 0 ; i<vec.size() ; i++)
    // {
    //     arr[vec[i]]++;
    // }
    // int rep = -1 , miss = -1;
    // for(int j = 0 ; j<arr.size() ; j++)
    // {
    //     if(arr[j] > 1)
    //     {
    //         rep = j;
    //     }
    //     if(arr[j] == 0)
    //     {
    //         miss = j;
    //     }
    // }
    // ans.push_back(rep);
    // ans.push_back(miss);

    // Best Approach 
    // using equations
    long long int n = vec.size();
    long long int Ns = (n*(n+1))/2;
    long long int N2s = (n*(n+1)*((2*n)+1))/6;
    long long int aNs = 0 , aN2s = 0 ; 

    for(long long int i = 0 ; i<vec.size() ; i++)
    {
        aNs += vec[i];
        aN2s += (vec[i]*vec[i]);
    }

    long long int diff1 = aNs - Ns , diff2 = aN2s - N2s;
    long long int dev = diff2/diff1;
    long long int rep = (dev + diff1)/2;
    
    cout<<"ans is "<<rep<<" "<<rep-diff1<<endl;

    return 0; 
 }
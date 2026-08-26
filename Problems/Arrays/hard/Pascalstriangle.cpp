#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // Question Type 1 : when we want to calculate a particular pascal's triangle number at a particular location(row and column (given))
    int r , c ;
    cin>>r>>c;
    // Optimal approach
    r = r-1 , c=c-1;
    // calculating rCn
    int res = 1 , multi = 1;
    for(int i = r ; i>r-c ; i--)
    {
        multi = (multi*i)/res;
        cout<<i<<" "<<res<<endl;
        res++; 
    } 
    cout<<multi<<endl;
    
    // Question Type 3 : when we have to return the whole pascal triangle
    // int nRows;
    // cin>>nRows;
    // vector<vector<int>>vec;

    // // Brute force Solution
    // vec.push_back({1});
    // for(int i = 1 ; i<=nRows ; i++)
    // {
    //     vector<int>row;
    //     row.push_back(1);
    //     for(int j = 1 ; j<vec[vec.size()-1].size() ; j++)
    //     {
    //         int sum = vec[vec.size()-1][j] + vec[vec.size()-1][j-1];
    //         row.push_back(sum);  
    //     }
    //     row.push_back(1);
    //     vec.push_back(row);
    // }
    // for(int i = 0 ; i<vec.size() ; i++)
    // {
    //     for(int j = 0 ; j<vec[i].size() ; j++)
    //     {
    //         cout<<vec[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<vector<int>>vec;

    for(int i = 0 ; i<n ; i++)
    {
        vector<int>col;
        for(int j = 0 ; j<m ; j++)
        {
            int no;
            cin>>no;
            col.push_back(no);
        }
        vec.push_back(col);
    }

    // Brute force approach
    // for(int i = 0 ; i<vec.size() ; i++)
    // {
    //     for(int j = 0 ; j<vec[i].size() ; j++)
    //     {
    //         if(vec[i][j] == 0)
    //         {
    //             for(int k = 0 ; k<vec.size() ; k++)
    //             {
    //                 if(vec[k][j] == 1)
    //                 {
    //                     vec[k][j]=-1;
    //                 }
    //             }
    //             for(int l = 0 ; l<vec[i].size() ; l++)
    //             {
    //                 if(vec[i][l] == 1)
    //                 {
    //                     vec[i][l]=-1;
    //                 }
    //             }
    //         }
    //     }
    // }
    // for(int i = 0 ; i<vec.size() ; i++)
    // {
    //     for(int j = 0 ; j<vec[i].size() ; j++)
    //     {
    //         if(vec[i][j] == -1)
    //         {
    //             vec[i][j]=0;
    //         }
    //     }
    // }
    // for(int i = 0 ; i<vec.size() ; i++)
    // {
    //     for(int j = 0 ; j<vec[i].size() ; j++)
    //     {
    //         cout<<vec[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // Better Approach
    // vector<int>row(n,0);
    // vector<int>col(m,0);

    // for(int i = 0 ; i<vec.size() ; i++)
    // {
    //     for(int j = 0 ; j<vec[i].size() ; j++)
    //     {
    //         if(vec[i][j] == 0)
    //         {
    //             row[i] = 1;
    //             col[j] = 1;
    //         }
    //     }
    // }

    // for(int i = 0 ; i<vec.size() ; i++)
    // {
    //     for(int j = 0 ; j<vec[i].size() ; j++)
    //     {
    //         if(row[i] == 1 || col[j] == 1)
    //         {
    //             vec[i][j] = 0;
    //         }
    //     }
    // }

    // for(int j = 0 ; j<vec.size() ; j++)
    // {
    //     for(int i = 0 ; i<vec[i].size() ; i++)
    //     {
    //         cout<<vec[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }

    // Optimized Approach
    int col0 = 1;

    for(int i = 0 ; i<vec.size() ; i++)
    {
        for(int j = 0 ; j<vec[0].size() ; j++)
        {
            if(vec[i][j] == 0)
            {
                vec[i][0] = 0;
                if(j == 0)
                {
                    col0 = 0;
                }
                else
                {
                    vec[0][j] = 0;
                }
            }
        }
    }
    for(int i = 1 ; i<vec.size() ; i++)
    {
        for(int j = 1 ; j<vec[i].size() ; j++)
        {
            if(vec[0][j] == 0 || vec[i][0] == 0)
            {
                vec[i][j] = 0;
            }
        }
    }
    if(vec[0][0] == 0)
    {
        for(int i = 0 ; i<vec[0].size() ; i++)
        {
            vec[0][i] = 0;
        }
    }
    if(!col0)
    {
        for(int j = 0 ; j<vec[0].size() ; j++)
        {
            vec[j][0] = 0;
        }
    }
    for(int j = 0 ; j<vec.size() ; j++)
    {
        for(int i = 0 ; i<vec[i].size() ; i++)
        {
            cout<<vec[j][i]<<" ";
        }
        cout<<endl;
    }



    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> matrix{
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}
        };
    for(int i = 0; i < matrix.size(); i++)
    {
        for(int j = matrix.size() - 1;j > 0; j--)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
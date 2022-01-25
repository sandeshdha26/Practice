#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> matrix{
        {2, 45, 18},
        {67, 55, 89},
        {64, 98, 20}
    };
    int first = 0;
    int seocnd = 0;
    int third, fourth = 0;
    int n = matrix.size();
    
    for(int i = 0;i < n; i++)
    {
        for(int j = 0;j < n; j++)
        {
            cout<<matrix[i][j]<<endl;
            cout<<matrix[i][(2*n - 1) - j]<<endl;
            cout<<matrix[(2*n - 1) - i][j]<<endl;
            cout<<matrix[(2*n - 1) - i][(2*n - 1) - j]<<endl;
        }
    }
}
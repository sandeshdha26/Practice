#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int findUniqueValue(vector<int> arr)
{
    int i, j;
    long total = arr.size();
    //bool isDuplicate;
    for(i = 0;i < total; i++)
    {
        for(j = 0;j < total; j++)
        {
            if(arr[i] == arr[j])
                break;
            else
            //if(i == j)
            return arr[i];
                //cout<<arr[i]<<" ";
        }
    }
    //return 0;
}

int main()
{
    vector<int> array{10, 20, 30, 40, 30, 20, 10};
    cout<<"The unique value is: "<<findUniqueValue(array);
    return 0;
}
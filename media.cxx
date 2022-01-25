#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int median(vector<int> arr)
{
    int i, j, imin;
    int total = arr.size();
    sort(arr.begin(),arr.end());
     /* for(i = 0;i < total - 1; i++)
    imin = i;   //place minimum index in imin
    {
        for(j = i + 1;j < total; j++)
        {
            if(arr[j] < arr[imin])
            imin = j;
            swap(arr[i], arr[imin]);
        }
    }   //have to sort an array before finding median value */
    int medianValue = total / 2;
    //cout<<arr[medianValue]<<endl;
    return arr[medianValue];
}

int main()
{
    vector<int> array{11,23,1,34,76,29};
    cout<<"The median value is: "<<median(array);
    return 0;
}
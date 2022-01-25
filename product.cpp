#include<iostream>
using namespace std;

int product(int arr[], int n)
{
    int i, prod = 1;
    for(i = 0;i < n; i++)
    {
        prod = prod * arr[i];
    }
    return prod;
}

int main()
{
    int size, a[10], result;
    cout<<"\nEnter an array size: ";
    cin>>size;
    cout<<"\nEnter array elements: ";
    for(int j = 0;j < size; j++)
    {
        cin>>a[j];
    }
    cout<<"\nThe product is: ";
    result = product(a, size);
    cout<<result;
    return 0;
}
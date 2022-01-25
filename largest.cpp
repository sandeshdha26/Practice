#include<iostream>
using namespace std;

int largest(int array[], int n)
{
    int i;
    int current = array[0];
    for(i = 1;i < n; i++)
        if(array[i] > current)
        current = array[i];
    return current;

}

int main()
{
    int arr[5], size;
    cout<<"\nEnter the 5 size array: "<<endl;
    for(int i = 0;i < 5; i++)
    {
        cin>>arr[i];
    }
    size = sizeof(arr) / sizeof(arr[0]);
    cout<<"The largest element is: "<<largest(arr, size);
    return 0;
}
#include<iostream>
using namespace std;

void minmax(int a[], int n, int &min, int &max)
{
    max = a[0];
    min = a[0];
    for(int i = 0;i < n; i++)
    {
        if(min > a[i])
        {
            min = a[i];
        }
        //min = arr[i];
        else if(max < a[i])
        {
            max = a[i];
        }
        /*max = arr[i];*/
    }
}
int main()
{
    int i, n, min, max;
    cout<<"\nEnter size of an array: ";
    cin>>n;
    int a[n];
    cout<<"\nEnter elements in an array: ";
    for(i = 0;i < n; i++)
    {
        cin>>a[i];
    }
    minmax(a, n, min, max);
    cout<<"\n SMALLEST NUMBER: "<<min;
    cout<<"\n LARGEST NUMBER: "<<max;
    return 0;
}
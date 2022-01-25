#include<iostream>
using namespace std;

long long int rootWithoutSqrt(long int x)
{
    long low = 0;
    long high = x;
    long answer = 0;

    while(low <= high)
    {
        long mid = low + (high - low) / 2;
        long s = mid * mid;

        if(s==x)
        return mid;

        if (x > mid*mid)
        {
            low = mid + 1;
            answer = mid;
        }
        else
        high = mid - 1;
    }
    return answer;
}

int main()
{
    int number;
    cout<<"\nEnter number to find square root: ";
    cin>>number;
    cout<<"\nThe square root is: "<<rootWithoutSqrt(number);
    return 0;
}
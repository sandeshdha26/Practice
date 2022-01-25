#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int kases;
    cin >> kases;
    int kase;
    for(kase = 1; kase <= kases; kase++) {
        int  N;
        cin >> N;
        vector<long> result;
        result.push_back(1);
        int temp, carry = 0;
        for(int i = 2; i <= N; i++) {
            for(int j = 0; j < result.size(); j++) {
                temp = carry + result[j] * i;
                carry = temp / 10;
                result[j] = temp % 10;
            }
            while(carry) {
                result.push_back(carry % 10);
                carry /= 10;
            }
        }
        for(int i = result.size() - 1; i >= 0; i--){
            cout << result[i];
        }
        cout << endl;
    }
    return 0;
}
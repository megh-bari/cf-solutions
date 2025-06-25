#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;

    int sum = w * (w + 1) / 2;
    int total_cost = k * sum;
    
    long long borrow = 0;
    if (total_cost >n)
        borrow = total_cost - n;

    cout << borrow << endl;
    return 0;
}
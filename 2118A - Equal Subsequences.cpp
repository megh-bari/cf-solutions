#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        // for 1's

        for (int i = 0; i < k; i++)
        {
            cout << "1";
        }

        // for 0's

        for (int i = 0; i < n - k; i++)
        {
            cout << "0";
        }
        cout << endl;
    }

    return 0;
}
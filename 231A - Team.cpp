// Problem: 231A - Team

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int count = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;

        int sum = petya + vasya + tonya;

        if (sum >= 2)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
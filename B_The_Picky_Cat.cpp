#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int key = a[0];
        int key2 = a[0] * -1;

        int canNotBeGreater = 0, canBeGreater = 0;

        for (int i = 1; i < n; i++)
        {
            if (a[i] < key && a[i] * (-1) < key)
            {
                canNotBeGreater++;
            }
            if (a[i] > key)
            {
                canBeGreater++;
            }
        }

        int minimumRequired = 0;
        if (n % 2 == 0)
        {
            minimumRequired = (n / 2) - 1;
        }
        else
        {
            minimumRequired = (n / 2);
        }

        if (canNotBeGreater > minimumRequired)
        {
            cout << "NO" << endl;
        }

        else
        {
            cout << "YES" << endl;
        }
    }
}
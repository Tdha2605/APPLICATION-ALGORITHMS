// Problem: https://onlinejudge.org/external/113/11389.pdf

#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (true)
    {
        int n, d, r;
        cin >> n >> d >> r;

        if (n == 0 && d == 0 && r == 0)
            break;

        vector<int> morning(n);
        vector<int> evening(n);

        for (int i = 0; i < n; i++)
        {
            cin >> morning[i];
        }
        sort(morning.begin(), morning.end());

        for (int i = 0; i < n; i++)
        {
            cin >> evening[i];
        }
        sort(evening.begin(), evening.end(), greater<int>());

        int cost = 0;
        for (int i = 0; i < n; i++)
        {
            int totalLength = morning[i] + evening[i];
            if (totalLength > d)
            {
                cost += (totalLength - d) * r;
            }
        }

        cout << cost << endl;
    }

    return 0;
}

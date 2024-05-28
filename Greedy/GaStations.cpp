// Problem: https://onlinejudge.org/external/123/12321.pdf
#include <bits/stdc++.h>
using namespace std;

struct GasStation
{
    int x;
    int r;
};

bool compare(const GasStation &a, const GasStation &b)
{
    return a.x - a.r < b.x - b.r;
}

int main()
{
    while (true)
    {
        int L, G;
        cin >> L >> G;

        if (L == 0 && G == 0)
            break;

        vector<GasStation> stations(G);
        for (int i = 0; i < G; ++i)
        {
            cin >> stations[i].x >> stations[i].r;
        }

        sort(stations.begin(), stations.end(), compare);

        // Điểm cuối đã được cover
        int currentCoverageEnd = 0;
        // Ga đang được duyệt
        int i = 0;
        // Ga có thể thay thế
        int usedStations = 0;
        // Không thể thay thế
        bool impossible = false;

        while (currentCoverageEnd < L)
        {
            // Điểm bao phủ bên phải đã đi qua
            int maxCoverageEnd = currentCoverageEnd;
            while (i < G && (stations[i].x - stations[i].r) <= currentCoverageEnd)
            {
                maxCoverageEnd = max(maxCoverageEnd, stations[i].x + stations[i].r);
                ++i;
            }

            if (maxCoverageEnd == currentCoverageEnd)
            {
                impossible = true;
                break;
            }

            currentCoverageEnd = maxCoverageEnd;
            ++usedStations;
        }

        if (impossible)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << G - usedStations << endl;
        }
    }

    return 0;
}

// Problem: https://onlinejudge.org/external/100/10020.pdf

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Segment
{
    int left, right;
};

bool compare(const Segment &a, const Segment &b)
{
    if (a.left == b.left)
        return a.right > b.right;
    return a.left < b.left;
}

int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        int M;
        cin >> M;

        vector<Segment> segments;
        while (true)
        {
            int L, R;
            cin >> L >> R;
            if (L == 0 && R == 0)
                break;
            segments.push_back({L, R});
        }

        sort(segments.begin(), segments.end(), compare);

        int covered = 0, selectedCount = 0;
        vector<int> result;
        int i = 0, n = segments.size();

        while (covered < M)
        {
            int newCovered = -1;
            while (i < n && segments[i].left <= covered)
            {
                if (segments[i].right > newCovered)
                {
                    newCovered = segments[i].right;
                }
                i++;
            }

            if (newCovered <= covered)
            {
                selectedCount = 0;
                break;
            }

            covered = newCovered;
            result.push_back(i - 1);
            selectedCount++;
        }

        if (covered < M)
        {
            cout << "0\n";
        }
        else
        {
            cout << selectedCount << "\n";
            for (int idx : result)
            {
                cout << segments[idx].left << " " << segments[idx].right << "\n";
            }
        }

        if (testCases)
        {
            cout << "\n";
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, M;
    cin >> n >> M;

    int A[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }


    int res = 0;

    int S = 0;
    int L = 0;
    for (int R = 0; R < n; R++)
    {
        S += A[R];
        while (S > M)
        {
            S -= A[L];
            L += 1;
        }
        res = max(res, R - L +1);
    }
    cout << res;

}
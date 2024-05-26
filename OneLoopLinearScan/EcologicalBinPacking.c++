// problem: https://onlinejudge.org/external/1/102.pdf
// B-G-C
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int bin1[3], bin2[3], bin3[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> bin1[i];
    }

    for (int i = 0; i < 3; i++)
    {
        cin >> bin2[i];
    }

    for (int i = 0; i < 3; i++)
    {
        cin >> bin3[i];
    }

    char ans[4];
    int sum = INT_MAX;

    // BGC
    int tmp = bin2[0] + bin3[0] + bin1[1] + bin3[1] + bin1[2] + bin2[2];
    if (tmp < sum)
    {
        sum = tmp;
        strcpy(ans, "BGC");
    }

    // BCG
    tmp = bin2[0] + bin3[0] + bin1[2] + bin3[2] + bin1[1] + bin2[1];
    if (tmp < sum)
    {
        sum = tmp;
        strcpy(ans, "BCG");
    }

    // GBC
    tmp = bin2[1] + bin3[1] + bin1[0] + bin3[0] + bin1[2] + bin2[2];
    if (tmp < sum)
    {
        sum = tmp;
        strcpy(ans, "GBC");
    }

    // GCB
    tmp = bin2[1] + bin3[1] + bin1[2] + bin3[2] + bin1[0] + bin2[0];
    if (tmp < sum)
    {
        sum = tmp;
        strcpy(ans, "GCB");
    }

    // CBG
    tmp = bin2[2] + bin3[2] + bin1[0] + bin3[0] + bin1[1] + bin2[1];
    if (tmp < sum)
    {
        sum = tmp;
        strcpy(ans, "CBG");
    }

    // CGB
    tmp = bin2[2] + bin3[2] + bin1[1] + bin3[1] + bin1[0] + bin2[0];
    if (tmp < sum)
    {
        sum = tmp;
        strcpy(ans, "CGB");
    }

    cout << ans <<" "<< sum;

    return 0;
}
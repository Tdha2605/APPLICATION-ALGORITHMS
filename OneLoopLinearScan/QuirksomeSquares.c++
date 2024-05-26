// problem: https://onlinejudge.org/external/2/256.pdf

#include <bits/stdc++.h>
using namespace std;


int main()
{
    vector<int> quirkNum;
    for (int i = 0; i < 9999; i++)
    {
        quirkNum.push_back(i*i);
    }

    int digits;
    while (cin >> digits)
    {
        for (int i = 0; i < (int)quirkNum.size(); i++)
        {
            if (quirkNum[i] >= pow(10, digits))
            {
                break;
            }

            int left = quirkNum[i] / (int)pow(10, digits/2);
            int right = quirkNum[i] % (int)pow(10, digits/2);

            if ((left + right) * (left + right) == quirkNum[i])
            {
                cout << setw(digits) << setfill('0') << quirkNum[i] << "\n";
            }
        }
    }
    return 0;
}
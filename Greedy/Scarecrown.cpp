// https://onlinejudge.org/external/124/12405.pdf

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int t = 1; t <= T; t++)
    {
        int N;
        cin >> N;

        string field;
        cin >> field;

        int scarecrows = 0;
        for (int i = 0; i < N; i++)
        {
            if (field[i] == '.')
            {
                // Place a scarecrow here
                scarecrows++;
                // Skip the next two spots since they are covered by this scarecrow
                i += 2;
            }
        }

        cout << "Case " << t << ": " << scarecrows << endl;
    }

    return 0;
}

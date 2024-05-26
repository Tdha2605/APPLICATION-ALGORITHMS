// problem: https://onlinejudge.org/external/9/927.pdf

#include <bits/stdc++.h>

#define MAX_POLY_DEGREE 20
#define MAX_COEFF 10000
#define MAX_TEST_CASES 100

typedef long long ll;

ll calculate_an(int degree, int *coefficients, int n)
{
    ll result = 0;
    ll n_power = 1;
    for (int i = 0; i <= degree; i++)
    {
        result += coefficients[i] * n_power;
        n_power *= n;
    }
    return result;
}

int main()
{
    int C;
    scanf("%d", &C);

    while (C--)
    {
        int degree;
        int coefficients[MAX_POLY_DEGREE + 1];

        // Read polynomial coefficients
        scanf("%d", &degree);
        for (int i = 0; i <= degree; i++)
        {
            scanf("%d", &coefficients[i]);
        }

        // Read d and k
        int d, k;
        scanf("%d %d", &d, &k);

        ll length = 0;
        int n = 1;

        while (1)
        {
            ll an = calculate_an(degree, coefficients, n);
            ll repeat_length = n * d;
            if (length + repeat_length >= k)
            {
                printf("%lld\n", an);
                break;
            }
            length += repeat_length;
            n++;
        }
    }

    return 0;
}

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int factorize(int N)
{
    int n = sqrt(N);
    do {
        if (N % n == 0) {
            return n;
        }
    } while (n--);
    return 1;
}

int main()
{
    int N, m, n;
    int spiral, idx;
    int i, j;
    vector<int> raw;
    vector<vector<int> > matrix;

    scanf("%d", &N);
    n = factorize(N);
    m = N / n;
    raw.resize(N);
    for (i = 0; i < N; i++) {
        scanf("%d", &raw[i]);
    }
    sort(raw.rbegin(), raw.rend());
    matrix.resize(m, vector<int>(n));

    spiral = m / 2 + m % 2;
    idx = 0;
    for (i = 0; i < spiral; i++) {
        for (j = i; j < n - i && idx < N; j++) {
            matrix[i][j] = raw[idx++];
        }
        for (j = i + 1; j < m - i - 1&& idx < N; j++) {
            matrix[j][n - i - 1] = raw[idx++];
        }
        for (j = i; j < n - i - 1 && idx < N; j++) {
            matrix[m - i - 1][n - j - 1] = raw[idx++];
        }
        for (j = i; j < m - i - 1 && idx < N; j++) {
            matrix[m - j - 1][i] = raw[idx++];
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (j != 0) {
                printf(" ");
            }
            printf("%d", matrix[i][j]);
            if (j == n - 1) {
                printf("\n");
            }
        }
    }
    return 0;
}

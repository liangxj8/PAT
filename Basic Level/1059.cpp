#include <cstdio>
#include <cstring>

void initPrime(bool[], int);

int main()
{
    int n, k, i, id;
    bool isPrime[10024];
    int rank[10000];

    scanf("%d", &n);
    memset(isPrime, true, sizeof(isPrime));
    memset(rank, -1, sizeof(rank));
    initPrime(isPrime, n);

    for (i = 1; i <= n; i++) {
        scanf("%d", &id);
        rank[id] = i;
    }
    scanf("%d", &k);
    for (i = 0; i < k; i++) {
        scanf("%d", &id);
        if (rank[id] == -1) {
            printf("%04d: Are you kidding?\n", id);
        } else if (rank[id] == -2) {
            printf("%04d: Checked\n", id);
        } else if (rank[id] == 1) {
            printf("%04d: Mystery Award\n", id);
            rank[id] = -2;
        } else if (isPrime[rank[id]]) {
            printf("%04d: Minion\n", id);
            rank[id] = -2;
        } else {
            printf("%04d: Chocolate\n", id);
            rank[id] = -2;
        }
    }

    return 0;
}

void initPrime(bool isPrime[], int n)
{
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            for (int j = 2; j * i <= n; j++) {
                isPrime[j * i] = false;
            }
        }
    }
}

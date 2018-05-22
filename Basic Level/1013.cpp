#include <cstdio>
#include <vector>
using namespace std;

bool isPrime(int num, vector<int> &prime) {
    for (int i = 0; i < prime.size(); i++) {
        if (num % prime[i] == 0)
            return false;
    }
    return true;
}

int main()
{
    int m, n;
    int i, j;
    vector<int> prime;

    scanf("%d %d", &m, &n);
    prime.push_back(2);
    for (i = 3; prime.size() <= n; i++)
        if (isPrime(i, prime))
            prime.push_back(i);
    for (i = m - 1; i < n; i++)
        if ((i - m + 2) % 10 == 0 || i == n -1) {
            printf("%d\n", prime[i]);
        } else {
            printf("%d ", prime[i]);
        }

    return 0;
}

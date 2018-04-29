#include <cstdio>
int main()
{
    int arr[100];
    int N, M;
    int i;

    scanf("%d %d", &N, &M);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    M = M % N;
    for (i = N - M; i < N; i++) {
        if (N == M && i == N - 1)
            printf("%d\n", arr[i]);
        else
            printf("%d ", arr[i]);
    }
    for (i = 0; i < N - M; i++) {
        if (i != N - M - 1)
            printf("%d ", arr[i]);
        else
            printf("%d\n", arr[i]);
    }

    return 0;
}

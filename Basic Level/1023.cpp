#include <cstdio>
int main()
{
    int i;
    int num;
    int count[10];

    for (i = 0; i < 10; i++) {
        scanf("%d", &num);
        count[i] = num;
    }

    for (i = 1; i < 10; i++) {
        if (count[i] > 0) {
            printf("%d", i);
            count[i]--;
            break;
        }
    }
    while(count[0]--) {
        printf("0");
    }
    for (i = 1; i < 10; i++) {
        if (count[i] > 0) {
            while (count[i]--) {
                printf("%d", i);
            }
        }
    }

    return 0;
}

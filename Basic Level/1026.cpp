#include <cstdio>
#include <cmath>
int main()
{
    int tic, toc;
    int runtime;
    int min, sec;

    scanf("%d %d", &tic, &toc);
    runtime = round((toc - tic) / 100.0);
    sec = runtime % 60;
    runtime /= 60;
    min = runtime % 60;
    runtime /= 60;

    printf("%02d:%02d:%02d\n", runtime, min, sec);

    return 0;
}

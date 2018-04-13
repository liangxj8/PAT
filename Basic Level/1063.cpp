#include <cstdio>
#include <cmath>
int main()
{
    int N;
    int real, imaginary;
    float module;
    float normal_radius = 0;

    scanf("%d", &N);
    while (N--) {
        scanf("%d %d", &real, &imaginary);
        module = sqrt(real * real + imaginary * imaginary);
        if (module > normal_radius) {
            normal_radius = module;
        }
    }
    printf("%0.2f\n", normal_radius);

    return 0;
}

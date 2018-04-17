#include <cstdio>
#include <cmath>
// note: 'std::abs'
using namespace std;
int main()
{
    int pGalleon, pSickle, pKnut;
    int aGalleon, aSickle, aKnut;
    int cGalleon, cSickle, cKnut;

    scanf("%d.%d.%d ", &pGalleon, &pSickle, &pKnut);
    scanf("%d.%d.%d", &aGalleon, &aSickle, &aKnut);

    pSickle += pGalleon * 17;
    pKnut += pSickle * 29;
    aSickle += aGalleon * 17;
    aKnut += aSickle * 29;
    // calculate the absolute value first
    cKnut = abs(aKnut - pKnut);
    cSickle = cKnut / 29;
    cKnut = cKnut % 29;
    cGalleon = cSickle / 17;
    cSickle = cSickle % 17;
    if (aKnut - pKnut < 0) {
        printf("-");
    }
    printf("%d.%d.%d\n", cGalleon, cSickle, cKnut);

    return 0;
}

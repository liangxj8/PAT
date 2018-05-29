#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n, i, j;
    int result = 0;
    long int p;
    
    scanf("%d %ld", &n, &p);
    vector<long int> vec(n);

    for (i = 0; i < vec.size(); i++) {
        scanf("%ld", &vec[i]);
    }
    sort(vec.begin(), vec.end());
    for (i = 0; i < vec.size(); i++) {
        for (j = i + result; j < vec.size(); j++) {
            if (vec[j] <= vec[i] * p) {
                result = j - i + 1 > result ? j - i + 1 : result;
            } else {
                break;
            }
        }
    }
    printf("%d\n", result);

    return 0;
}

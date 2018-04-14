#include <iostream>
using namespace std;
int main()
{
    int i;
    string A, B;
    int DA, DB;
    int PA, PB; // test case is weak
    int countA = 0;
    int countB = 0;

    cin >> A >> DA >> B >> DB;
    for (i = 0; i < A.length(); i++) {
        if (A[i] - '0' == DA) {
            countA++;
        }
    }
    for (i = 0; i < B.length(); i++) {
        if (B[i] - '0' == DB) {
            countB++;
        }
    }
    if (countA == 0) {
        PA = 0;
    } else {
        PA = DA;
        // be careful about the different between i++ and ++i
        while (--countA) {
            PA = PA * 10 + DA;
        }
    }
    if (countB == 0) {
        PB = 0;
    } else {
        PB = DB;
        while (--countB) {
            PB = PB * 10 + DB;
        }
    }
    cout << PA + PB << endl;

    return 0;
}

#include <iostream>
using namespace std;
int main()
{
  int i, j;
  int N;
  int num[10];
  int sum = 0;

  cin >> N;
  for (i = 0; i < N; i++) {
    cin >> num[i];
  }
  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      if (i != j) {
        sum += (num[i] * 10 + num[j]);
      }
    }
  }
  cout << sum << endl;

  return 0;
}

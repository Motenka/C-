#include <iostream>
using namespace std;
int main() {
  int a, b=0;
  cin >> a;
  while (a != 0) {
    b++;
    cin >> a;
  }
  cout << b;
  return 0;
}

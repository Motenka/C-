#include <iostream>
using namespace std;
int main() {
  int a,b=2;
  cin >> a;
  while (a/b*b!=a) {b++;}
  cout << b;
  return 0;
}

#include <iostream>
using namespace std;
int main() {
  int N;
    cin >> N;
  int a=2;
        if ((N&(N - 1)) == 0)
            cout << "YES";
    else
        cout << "NO";
  return 0;
}

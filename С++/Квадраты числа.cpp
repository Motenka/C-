#include <iostream>
using namespace std;
int main()
{
  int a, n;
    n=1;
    cin >> a;
    while (a >= n*n)
    {
        cout <<n*n<<" ";
          n=n+1;
    }
  return 0;
}

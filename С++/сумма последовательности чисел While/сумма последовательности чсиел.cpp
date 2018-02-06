#include <iostream>
using namespace std;
int main()
{
int a,i;
cin >> a;
while (a != 0)
{
    i = a + i;
    cin >> a;
}
cout << i;
return 0;
}

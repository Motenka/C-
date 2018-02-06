#include <iostream>
int main()
{
    int a1,b1,c2,d2;
    std::cin >> a1 >> b1 >> c2 >> d2;
    if (a1 == c2 && b1 != d2 || b1 == d2 && a1 != c2)
       std::cout << "YES";
    else
        std::cout << "NO";
    return 0;
}

#include <iostream>
int main()
{
    int x1,y1,x2,y2;
    std::cin >> x1 >> y1 >> x2 >> y2;
    if (x2 - x1 == 1 && y2 - y1 == 0 && x2 - x1 == 0 && y2-y1 == 1)
        std::cout << "NO";
    else std:: cout << "YES";


}

#include <iostream>
int main()
{
    int rub, kop, kol;
    std::cin >> rub >> kop >> kol;
    rub = rub * kol + (kop * kol)/100 ;
    kop = (kop * kol)%100;
    std::cout << rub << " " << kop;

         return 0;
}

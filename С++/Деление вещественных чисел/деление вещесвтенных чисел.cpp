#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    /*int a = 1, b = 2;
    double x = 2.5, y = 1.2;       // не получится так как эти две переменные int а результат должен получится в double
    cout << (double)a / b;
    return 0;*/

    /*int a = 1, b = 2;
    double x = 2.5, y = 1.2;      // для того что бы заработало надо хотя бы одну из переменных int сделать в double
    cout << a / (double)b;        // из целового в вещественную
    return 0;*/

    /*double x = 2.2, y = -1.5;                   // из вещественных в целые
    cout << trunc(x) << " " << trunc(y) << " "; // trunc отрезать дробную часть числа
    return 0;*/

    /*double x = 2.6, y = -1.6;                   // из вещ в целые
    cout << floor(x) << " " << floor(y) << " "; // floor округление вниз
    return 0;*/

    /*double x = 2.6, y = -1.6;                   // из вещ в целые
    cout << ceil(x) << " " << ceil(y) << " "; // ceil округление вверх
    return 0;*/

    double x = 2.6, y = -1.6;                   // из вещ в целые
    cout << round(x) << " " << round(y) << " "; // round округление по математическим правилам
    return 0;




}

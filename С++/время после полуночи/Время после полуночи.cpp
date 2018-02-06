#include <iostream>
int main()
{
    int time, hours, minut, sec;
    std::cin >> time;
    hours = ((time / 60)/60)%24;
    sec =  (time % 3600) % 60;
    minut = (time % 3600) / 60;
    std::cout << hours << ":" << minut / 10 << minut % 10<< ":" << sec / 10 << sec %10 ;

         return 0;
}

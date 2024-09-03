
#include <iostream>
#include <cmath>

int main()
{
    //file 1 task 1

    /*
    double ansver = (35.78 + 75.214 + 39.6666) / 3;
    std::cout << ansver;
    */

    //file 1 task 2

    /*
    int num = 0;
    int stepen = 0;

    std::cout << "Enter the numbers:";
    std::cin >> num;
    std::cout << "Enter the stepen:";
    std::cin >> stepen;
    std::cout << pow(num, stepen);
    */

    //file 1 task 3

    /*
    const double PI = 3.141592653589793238;
    double diametr = 0;

    std::cout << "Enter the diametr:";
    std::cin >> diametr;

    std::cout << PI * (diametr * 2);
    */

    //file 1 task 4

    /*
    double grivni = 0;

    std::cout << "Enter the grivni:";
    std::cin >> grivni;
    std::cout << "Dolori:" << grivni / 40 << "\n";
    std::cout << "Evro:" << grivni / 35 << "\n";
    std::cout << "Bit:" << grivni / 40000 << "\n";
    */

    //file 1 task 5

    /*
    double km = 0;

    std::cout << "Enter the km:";
    std::cin >> km;
    std::cout << "Miles:" << km * 0.621371 << "\n";
    std::cout << "Water miles:" << km * 0.539957 << "\n";
    */

    //file 1 task 6

    /*
    double procent = 0;
    double num = 0;

    std::cout << "Enter the procent:";
    std::cin >> procent;
    std::cout << "Enter the num:";
    std::cin >> num;
    std::cout << "Resault:" << (procent / 100) * num << "\n";
    */

    //file 1 task 7

    /*
    double celsi = 0;
    double faringati = 0;

    std::cout << "Enter the Celsi:";
    std::cin >> celsi;
    std::cout << "Faringati:" << (celsi * 9.0 / 5.0) + 32.0 << "\n";
    std::cout << "Kelvin:" << celsi + 273.15 << "\n";
    std::cout << "Reaumur:" << celsi * 4.0 / 5.0 << "\n";
    std::cout << "Delis:" << (100.0 - celsi) * 3.0 / 2.0 << "\n";

    std::cout << "Enter the Faringati:";
    std::cin >> faringati;
    std::cout << "Celsi:" << (faringati - 32.0) * 5.0 / 9.0 << "\n";
    */

    //file 1 task 7

    //First 

    /*
    int a = 5;
    int b = 10;

    int swaping = a;
    a = b;
    b = swaping;

    std::cout << "Swap"<< a << b << "\n";
    */
    
    //Second

    int a = 5;
    int b = 10;

    a = a + b;
    b = a - b;
    a = a - b;

    std::cout << "Swap"<< a << b << "\n";
}


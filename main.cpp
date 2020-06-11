#include <iostream>
#include <unistd.h>
#include "include/Dice.h"

int main(int argc, char* argv[])
{
    std::cout << "Hello World!" << std::endl;

    Dice d20 = Dice(20);
    Dice d4 = Dice(4);
    Dice d6 = Dice(6);
    Dice d8 = Dice(8);
    Dice d10 = Dice(10);
    Dice d12 = Dice(10);
    Dice d100 = Dice(100);
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Rolled : " << d4.roll() << std::endl;
        std::cout << "Rolled : " << d6.roll() << std::endl;
        std::cout << "Rolled : " << d8.roll() << std::endl;
        std::cout << "Rolled : " << d10.roll() << std::endl;
        std::cout << "Rolled : " << d12.roll() << std::endl;
        std::cout << "Rolled : " << d20.roll() << std::endl;
        std::cout << "Rolled : " << d100.roll() << std::endl;
    }

    return 0;
}
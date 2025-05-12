#include <iostream>
#include <cstdlib>
#include <ctime>

int rollDice(int sides) {
    return (std::rand() % sides) + 1;
}

int main() {
    std::srand(std::time(0));

    int d4 = rollDice(4);
    int d6 = rollDice(6);
    int d8 = rollDice(8);
    int d10 = rollDice(10);
    int d12 = rollDice(12);
    int d20 = rollDice(20);

    std::cout << "Wyniki rzutów kośćmi:" << std::endl;
    std::cout << "d4: " << d4 << std::endl;
    std::cout << "d6: " << d6 << std::endl;
    std::cout << "d8: " << d8 << std::endl;
    std::cout << "d10: " << d10 << std::endl;
    std::cout << "d12: " << d12 << std::endl;
    std::cout << "d20: " << d20 << std::endl;

    return 0;
}

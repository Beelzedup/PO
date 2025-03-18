#include <iostream>
#include <cmath>
using namespace std;

double mem;
bool mem_used;
double add(double a, double b) {
    return a + b;
}
double sub(double a, double b) {
    return a - b;
}
double tim(double a, double b) {
    return a * b;
}
double div(double a, double b) {
    if (b == 0) {
        return "Nie dzielimy przez 0 ";
    }
    return a / b;
}

double mod(double a, double b) {
    if (b == 0) {
        return "Nie dzielimy przez 0 ";
    }
    return a - (a/b) * b;
}
void erase(){}
void menu(string dzialanie){
    cout << 
    switch (znak)
    {
    case +:
        add();
        break;

    case -:
        sub();
            break;

    case *:
        tim();
        break;

    case /:
        div();
        break;

    case %:
        mod();
        break;

    case M:

        break;

    default:
        cout << "Niepoprawnie podane polecenie" << endl;
        break;
    }
}

int main()
{
    std::cout << "Hello World!\n";
}


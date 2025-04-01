#ifndef KALKULATOR_H
#define KALKULATOR_H

#include <iostream>
using namespace std;

class Kalkulator {
private:
    double mem;
    bool mem_zajeta;

public:
    Kalkulator();
    double add(double a, double b);
    double sub(double a, double b);
    double tim(double a, double b);
    double div(double a, double b);
    double mod(double a, double b);
    void pokaz_mem() const;
    void wyczysc_mem();
    double get_mem() const;
    bool get_mem_zajeta() const;
    void zapisz_mem(double value);
    bool menu();
};

#endif

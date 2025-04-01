#include "kalkulator.h"

Kalkulator::Kalkulator() : mem(0), mem_zajeta(false) {}

double Kalkulator::add(double a, double b) {
    return a + b;
}

double Kalkulator::sub(double a, double b) {
    return a - b;
}

double Kalkulator::tim(double a, double b) {
    return a * b;
}

double Kalkulator::div(double a, double b) {
    if (b == 0) {
        cout << "Nie dzielimy przez zero" << endl;
        return 0;
    }
    return a / b;
}

double Kalkulator::mod(double a, double b) {
    if (b == 0) {
        cout << "Nie dzielimy przez zero" << endl;
        return 0;
    }
    return a - (int)(a / b) * b;
}

void Kalkulator::pokaz_mem() const {
    if (mem_zajeta) {
        cout << "Wartosc zapisana w pamieci: " << mem << endl;
    } else {
        cout << "Pamiec jest pusta" << endl;
    }
}

void Kalkulator::wyczysc_mem() {
    mem = 0;
    mem_zajeta = false;
    cout << "Pamiec wyczyszczona" << endl;
}

double Kalkulator::get_mem() const {
    return mem;
}

bool Kalkulator::get_mem_zajeta() const {
    return mem_zajeta;
}

void Kalkulator::zapisz_mem(double value) {
    mem = value;
    mem_zajeta = true;
}

bool Kalkulator::menu() {
    double a, b, wynik;
    char znak;
    bool wybor;

    cout << "Dodawanie (+) " << endl;
    cout << "Odejmowanie (-) " << endl;
    cout << "Mnozenie (*) " << endl;
    cout << "Dzielenie (/) " << endl;
    cout << "Modulo (%) " << endl;
    cout << "Pamiec (m) " << endl;
    cout << "Wyczysc pamiec (c) " << endl;
    cout << "Zamknij program (x) " << endl;
    cin >> znak;

    if (znak == 'm') {
        pokaz_mem();
        return true;
    } else if (znak == 'c') {
        wyczysc_mem();
        return true;
    } else if (znak == 'x') {
        cout << "Koniec programu." << endl;
        return false;
    }

    cout << "Czy chcesz uzyc pamieci jako pierwszej liczby? Tak(1)/Nie(0)" << endl;
    cin >> wybor;
    if (wybor && mem_zajeta) {
        a = mem;
    } else {
        cout << "Podaj liczbe a" << endl;
        cin >> a;
    }

    cout << "Czy chcesz uzyc pamieci jako drugiej liczby? Tak(1)/Nie(0)" << endl;
    cin >> wybor;
    if (wybor && mem_zajeta) {
        b = mem;
    } else {
        cout << "Podaj liczbe b" << endl;
        cin >> b;
    }

    switch (znak) {
        case '+':
            wynik = add(a, b);
        break;
        case '-':
            wynik = sub(a, b);
        break;
        case '*':
            wynik = tim(a, b);
        break;
        case '/':
            wynik = div(a, b);
        break;
        case '%':
            wynik = mod(a, b);
        break;
        default:
            cout << "Niepoprawnie podane polecenie" << endl;
        return true;
    }

    cout << "Wynik: " << wynik << endl;
    zapisz_mem(wynik);
    cout << "\nWynik zapisany do pamieci\n" << endl;
    return true;
}

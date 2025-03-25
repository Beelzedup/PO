#include <iostream>
#include <string>
using namespace std;

class Kalkulator {
private:
    double mem = 0; //zmienna obsługująca pamięć 
    bool mem_zajeta = false; // zmienna informująca czy pamięć jest zajęta

public:
    //dodawanie
    double add(double a, double b) {
        return a + b;
    }

    // odejmowanie
    double sub(double a, double b) {
        return a - b;
    }

    //mnożenie
    double tim(double a, double b) {
        return a * b;
    }

    //dzielenie
    double div(double a, double b) {
        if (b == 0) {
            cout << "Błąd: Nie dzielimy przez zero" << endl;
            return 0;
        }
        return a / b;
    }

    //modulo
    double mod(double a, double b) {
        if (b == 0) {
            cout << "Błąd: Nie dzielimy przez zero" << endl;
            return 0;
        }
        return a - (a / b) * b;
    }
    //stan pamięci
    void pokaz_mem() {
        if (mem_zajeta) {
            cout << "Wartosc zapisana w pamieci: " << mem << endl;
        }
        else {
            cout << "Pamiec jest pusta " << endl;
        }
    }

    //czyszczenie pamięci
    void wyczysc_mem() {
        mem = 0;
        mem_zajeta = false;
        cout << "Pamiec wyczyszczona" << endl;
    }

    //funkcja get i set
    double get_mem() {
        return mem;
    }
    bool get_mem_zajeta() {
        return mem_zajeta;
    }
    void zapisz_mem(double value) {
        mem = value;
        mem_zajeta = true;
    }


    //menu
    void menu() {
        double a, b, wynik;
        char znak;
        bool wybor;

        cout << "Dodawania  (+) " << endl;
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
            return;
        }
        else if (znak == 'c') {
            wyczysc_mem();
            return;
        }
        else if (znak == 'x') {
            cout << "Koniec programu." << endl;
            exit(0);
        }

        // Wpisanie liczb
        cout << "Czy chcesz uzyc pamieci jako pierwszej liczby? Tak(1)/Nie(0)" << endl;
            cin >> wybor;
        if (wybor == true && mem_zajeta) {
            a = mem;
        }
        else {
            cout << "Podaj liczbe a" << endl;
            cin >> a;
        }
        cout << "Czy chcesz uzyc pamieci jako drugiej liczby? Tak(1)/Nie(0)" << endl;
            cin >> wybor;
        if (wybor == true && mem_zajeta) {
            b = mem;
        }
        else {
            cout << "Podaj liczbe b" << endl;
            cin >> b;
        }
       /* cout << "Podaj pierwsza liczbe (lub uzyj pamieci (m) aby skopiowac poprzedni wynik): ";
        cin >> wybor;
        if (wybor == "m" && mem_zajeta) a = mem; 
        else a = stod(wybor); // zmiana tekstu string na liczbę double

        cout << "Podaj druga liczbe (lub uzyj pamieci (m) aby skopiowac wynki): ";
        cin >> wybor;
        if (wybor == "m" && mem_zajeta) b = mem; 
        else b = stod(wybor); */

        switch (znak)
        {
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
            return;
        }
        cout << "Wynik: " << wynik << endl;
        zapisz_mem(wynik);
        cout << "Wynik zapisany do pamieci" << endl;
    }
};
int main() {
    Kalkulator kalk;
    while (true) {
        kalk.menu();
    }
    return 0;
}

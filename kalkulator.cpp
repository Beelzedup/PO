#include <iostream>
using namespace std;

double mem = 0; //zmienna obsługująca pamięć 
bool mem_zajeta = false; // zmienna informująca czy pamięć jest zajęta

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
    return a - (a/b) * b;
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

//menu
void menu(){
    double a, b, wynik;
    char znak;
    string wybor;
    
    cout << "Dodawania  (+) " << endl;
    cout << "Odejmowanie (-) " << endl;
    cout << "Mnozenie (*) " << endl;
    cout << "Dzielenie (/) " << endl;
    cout << "Modulo (%) " << endl;
    cout << "Pamiec (M) " << endl;
    cout << "Wyczysc pamiec (C) " << endl;
    cout << "Zamknij program (X) " << endl;
    cin >> znak;

    if (znak == 'M') {
        pokaz_mem();
        return;
    } 
    else if (znak == 'C') {
        wyczysc_mem();
        return;
    }
    else if (znak == 'X') {
        cout << "Koniec programu." << endl;
        exit(0);
    }

    // Wpisanie liczb
    cout << "Podaj pierwsza liczbe (lub uzyj pamieci (M) aby skopiowac poprzedni wynik): ";
    cin >> wybor;
    if (wybor == "M" && mem_zajeta) a = mem; else a = stod(wybor); // zmiana tekstu string na liczbę double

    cout << "Podaj druga liczbe (lub uzyj pamieci (M) aby skopiowac wynki): ";
    cin >> wybor;
    if (wybor == "M" && mem_zajeta) b = mem; else b= stod(wybor);
    
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
    mem = wynik;
    mem_zajeta = true;
    cout << "Wynik zapisany do pamieci" << endl;
}

int main() {
    while (true) {
        menu();
    }
return 0;
}


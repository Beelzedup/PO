// main.cpp
#include "kalkulator.h"

int main() {
    Kalkulator kalk;
    bool running = true;
    while (running) {
        running = kalk.menu();
    }
    return 0;
}

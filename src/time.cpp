// Time.cpp
#include <iostream>
#include <iomanip>

#include "include/time.h"

using namespace std;

// O contrutor de Time inicializa cada membro zomo zero
Time::Time() {
    hour = minute = second = 0;
}

// Configura novo valor de Time utiizando a hora universal;
void Time::setTime(int h, int m, int s) {

    hour   = (h >= 0 && h < 24) ? h : 0;    // valida hora
    minute = (m >= 0 && m < 60) ? m : 0;    // valida minutos
    second = (s >= 0 && s < 60) ? s : 0;    // valida segundos
}

// Imprime a hroa no formato de data/hora atual (HH:MM:SS)
void Time::printUniversal() {
    cout << setfill('0') << setw(2) << hour << ":"
            << setw(2) << minute << ":" << setw(2) << second;
}
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

    hour = (h >= 0 && h < 24) ? h : 0; // valida hora
}
#include "auto.h"
#include "moto.h"
#include "taxi.h"
#include "bus.h"
#include "ui.h"
#include <iostream>
#include <cstdlib>
#include <time.h>
int main()
{
    UI ui;
    Auto a(100, 40);
    Moto m(110, 40);
    Taxi t(100, 40, 4, 1000);
    Bus b(70, 40, 30, 500);
    Auto vec[4];
    vec[0] = a;
    vec[1] = m;
    vec[2] = t;
    vec[3] = b;
    srand(time(NULL));
    for (int i = 0; i < 4; i++)
        vec[i].accelerar(rand() % (101-11));
    for (int i = 0; i < 4; i++)
        vec[i].frenar(rand() % (101 - 11));
    for (int i = 0; i < 4; i++)
        ui.write(vec[i].toString());
}

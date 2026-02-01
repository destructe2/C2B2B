#include <iostream>
#include "generateRandomNumber.h"
#include <cstdlib>
#include <ctime>
using namespace std;
int generateRandomNumber() {
    static bool seeded=false;
    if(!seeded) {
        srand(time(nullptr));
        seeded=true;
    }
    return rand() % 10;
}
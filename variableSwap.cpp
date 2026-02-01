#include "variableSwap.h"
#include <iostream>
using namespace std;

void variableSwap() {
     int a = 1;
     int b = 2;
     int temp = a;
     a = b;
     b = temp;

    cout<<a<<" "<<b<<endl;
 }
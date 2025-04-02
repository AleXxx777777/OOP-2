#include "Func.h"
#include <iostream>
using namespace std;

void converted(int& grn, int& kop) {
    if (kop >= 100) {
        grn += kop / 100;
        kop %= 100;
    }
}

void suma(money& a, const money& b) {
    a.grn += b.grn;
    a.kop += b.kop;
    converted(a.grn, a.kop);
}

void mult(money& a, int multiplier) {
    a.grn *= multiplier;
    a.kop *= multiplier;
    converted(a.grn, a.kop);
}

void NationalBank(money& a) {
    if (a.kop % 10 >= 5) {
        a.kop = (a.kop / 10) * 10 + 10;
    }
    else {
        a.kop = (a.kop / 10) * 10;
    }
    converted(a.grn, a.kop);
}

void to_string(const money& a) {
    cout << a.grn << " grn " << a.kop << " kop" << endl;
}

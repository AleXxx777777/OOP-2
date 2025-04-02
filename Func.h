#pragma once

struct money {
    int grn;
    int kop;
};

void converted(int& grn, int& kop);
void suma(money& a, const money& b);
void mult(money& a, int multiplier);
void NationalBank(money& a);
void to_string(const money& a);

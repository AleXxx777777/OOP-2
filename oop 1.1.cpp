#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "Func.h"
using namespace std;

int main() {
    ifstream pfile("G:/Університет/Дискретна Математика/oop 1.1/prices.txt");
    if (!pfile.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    string line;
    money total = { 0, 0 };

    while (getline(pfile, line)) {
        cout << line << endl;

        string tokens[3];
        stringstream ss(line);
        string token;
        int i = 0;

        while (getline(ss, token, ',') && i < 3) {
            tokens[i++] = token;
        }

        if (i < 3) continue;

        int grn = stoi(tokens[0]);
        int kop = stoi(tokens[1]);
        int multiplier = stoi(tokens[2]);

        money current = { grn, kop };

        mult(current, multiplier);
        suma(total, current);
    }

    cout << endl << "General sum: ";
    to_string(total);

    NationalBank(total);
    cout << "Need to pay: ";
    to_string(total);

    pfile.close();
    return 0;
}

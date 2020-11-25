#include <iostream>
#include <string>
#include <string.h>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
const int f = 256;
bool pal(char t[f]) {
    int c = strlen(t);
    for (int i = 0; i < c / 2; i++) {
        if (t[i] != t[c - i - 1]) {
            return false;
        }
    }
    return true;
}
int main() {
    char t[f];
    char h[f];
    cout << "Vvedite predlozenie: ";
    gets (t);
    int k = 0;
    // for убирает пробелы
    for (int i = 0; i < strlen(t); i++) {
        if (t[i] != ' ') {
            h[k] = t[i];
            k++;
        }
    }
    if (pal(h)) {
        cout << "Palindrom";
    }
    else {
        cout << "Ne palindrom";
    }
}

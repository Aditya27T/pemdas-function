#include <iostream>

using namespace std;

float luasPermukaanTabung(int r, int t) {
    return 2 * 3.14 * r * (r + t);
}

float selimutTabung(int r, int t) {
    return 2 * 3.14 * r * t;
}

float volumeTabung(int r, int t) {
    return 3.14 * r * r * t;
}

void input(int &r, int &t) {
    cout << "Masukkan nilai jari-jari: ";
    cin >> r;
    cout << "Masukkan nilai tinggi: ";
    cin >> t;
    cout << endl;
}

void print(int r, int t) {
    if (r > 0 && t > 0) {
        cout << "Luas permukaan tabung adalah " << luasPermukaanTabung(r, t) << endl;
        cout << "Selimut tabung adalah " << selimutTabung(r, t) << endl;
        cout << "Volume tabung adalah " << volumeTabung(r, t) << endl;
    } else {
        cout << "Tidak dapat menghitung luas permukaan, selimut, dan volume tabung" << endl;
    }
}

void garis () {
    cout << "-----------------------------------" << endl;
}

void title() {
    garis();
    cout << "         Modul Tabung              " << endl;
    garis();
    cout << "  Program Menghitung Luas Permukaan" << endl;
    cout << "  Selimut dan Volume Tabung        " << endl;
    garis();
}

int main () {
    title();
    int r, t;
    input(r, t);
    garis();
    print(r, t);
    garis();
    return 0;
}

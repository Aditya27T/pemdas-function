#include <iostream>

using namespace std;


// fungsi menghitung faktorial
int faktorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

// fungsi menghitung kombinasi nCr
int kombinasi(int n, int r, int x = 0) {
    if (n >= r) { 
        x = n - r;
        return faktorial(n) / (faktorial(r) * faktorial(x));
    } else {
        return 0;
    }
}

void msg() {
    cout << "Kombinasi tidak dapat dihitung" << endl;
}

void print(int n, int r) {
    if (kombinasi(n, r) != 0) {
        cout << "Hasil kombinasi " << n << "C" << r << " adalah " << kombinasi(n, r) << endl;
    } else {
        msg();
    }
}

void input(int &n, int &r) { 
    cout << "Masukkan nilai n: ";
    cin >> n;
    cout << "Masukkan nilai r: ";
    cin >> r;
}

void title() {
    cout << "-----------------------------------" << endl;
    cout << "         Modul Kombinasi           " << endl;
    cout << "-----------------------------------" << endl;
    cout << "  Program Menghitung Kombinasi nCr " << endl;
    cout << "-----------------------------------" << endl;

}

int main (){
    title();
    int a, b;
    input(a, b);
    print(a, b);
    return 0;
}
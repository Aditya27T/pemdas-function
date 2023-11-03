#include  <iostream>

using namespace std;

int faktorial(int a){
    if (a == 1){
        return 1;
    } else {
        return a * faktorial(a-1);
    }
}

int main(){
    int x;
    cout << "MENCARI NILAI FAKTORIAL" << endl;
    cout << "Masukkan angka: ";
    cin >> x;
    cout << "Faktorial dari " << x << " != " << faktorial(x) << endl;
    return 0;
}
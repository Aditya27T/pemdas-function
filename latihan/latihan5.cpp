#include <iostream>

using namespace std;

long fibo(int n){
    if (n == 0 || n == 1){
        return n;
    } else {
        return fibo(n-1) + fibo(n-2);
    }
}

int main(){
    int x;
    cout << "MENCARI NILAI FIBONACCI" << endl;
    cout << "Masukkan angka: ";
    cin >> x;
    cout << "Fibonacci dari " << x << " = " << fibo(x) << endl;
    return 0;
}
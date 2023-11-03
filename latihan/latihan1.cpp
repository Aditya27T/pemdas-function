#include <iostream>

using namespace std;

void Rtukar(int *a, int *b);
void Vtukar(int &a, int &b);

int main (){
    int a = 99, b = 11;

    // call by reference
    cout << "nilai sebelum pemanggilan fungsi" << endl;
    cout << "a = " << a << " b = " << b << endl;
    Rtukar(&a,&b);

    cout << "nilai setelah pemanggilan fungsi Rtukar" << endl;
    cout << "a = " << a << " b = " << b << endl;

    // kembalikan ke nilai semula
    a = 99;
    b = 11;

    // call by value
    cout << "nilai sebelum pemanggilan fungsi" << endl;
    cout << "a = " << a << " b = " << b << endl;
    Vtukar(a,b);
    cout << "nilai setelah pemanggilan fungsi Vtukar" << endl;
    cout << "a = " << a << " b = " << b << endl;

    return 0;
}

void Rtukar(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    cout << "nilai dalam fungsi dengan call by reference" << endl;
    cout << "a = " << *a << " b = " << *b << endl;
}

void Vtukar(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;

    cout << "nilai dalam fungsi dengan call by reference" << endl;
    cout << "a = " << a << " b = " << b << endl;
}
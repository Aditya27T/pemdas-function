#include <iostream>

using namespace std;

int cari(int n1, int n2);
void print(int m);

int main(){
    int a = 5, b = 7;
    int c = cari(a,b);
    print(c);
    return 0;
}

int cari(int x, int y){
    if (x > y){
        return x;
    } else {
        return y;
    }
}

void print(int m){
    cout << "nilai terbesar adalah " << m << endl;
}
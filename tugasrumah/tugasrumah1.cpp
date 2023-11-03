#include <iostream>

using namespace std;

void judul (){
    cout << "----------------------------------------" << endl;
    cout << "              Modul Function            " << endl;
    cout << "----------------------------------------" << endl;
    cout << "            Menentukan Batas            " << endl;
    cout << "----------------------------------------" << endl;
}

void findMinMax(int &min, int &max) {
    int num;

    char option;

    cout << "Enter a number: ";
    cin >> num;

    min = num;
    max = num;

    while (true) {
        cout << "Do you want to enter another number? (y/n) ";
        cin >> option;

        if (option == 'y') {
            cout << "Enter a number: ";
            cin >> num;

            if (num < min) {
                min = num;
            }

            if (num > max) {
                max = num;
            }
        } else if (option == 'n') {
            break;
        } else {
            cout << "Invalid option!" << endl;
        }
    }
}

void print(int min, int max) {
    cout << endl;
    cout << "The minimum number is: " << min << endl;
    cout << endl;
    cout << "The maximum number is: " << max << endl;
}

int main() {
    judul();

    int min, max;
    findMinMax(min, max);

    print(min, max);

    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

void judul()
{
    cout << "----------------------------------------" << endl;
    cout << "              Modul Function            " << endl;
    cout << "----------------------------------------" << endl;
    cout << "         Program Standart Deviasi       " << endl;
    cout << "----------------------------------------" << endl;
}

void results()
{
    int a = 0;
    float aver, dev, data[100], sum = 0, b, totalb;
    char option;
    do
    {
        cout << "Masukkan Data : ";
        cin >> data[a];
        sum = sum + data[a];
        a++;
        cout << "Masukkan Data Lagi?(y/n) : ";
        cin >> option;
    } while (option == 'y');
    
    cout << endl;

    aver = sum / a;
    cout << " Nilai Rata-rata : " << aver << endl << endl;
    
    for (int i = 0; i < a; i++)
    {
        b = data[i] - aver;
        totalb = totalb + (b * b);
    }

    dev = sqrt(totalb / (a - 1));
    cout << " Simpangan Baku : " << dev << endl;
}

int main()
{
    judul();
    results();
    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

void judul()
{
    cout << "----------------------------------------" << endl;
    cout << "              Modul Function            " << endl;
    cout << "----------------------------------------" << endl;
    cout << " Menentukan Data Yang Sering Diinputkan " << endl;
    cout << "----------------------------------------" << endl;
}

void findModus(vector<int>& nums, int& modus)
{
    char option;

    do
    {
        int num;
        cout << "Masukkan Angka: ";
        cin >> num;

        nums.push_back(num);

        if (nums.size() == 1)
        {
            modus = num;
        }
        else
        {
            int count = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] == num)
                {
                    count++;
                }
            }

            if (count > modus)
            {
                modus = num;
            }
        }

        cout << "Apakah Anda Ingin Memasukkan Angka Lain? (y/n) ";
        cin >> option;

    } while (option == 'y');
}

void print(int modus)
{
    cout << endl;
    cout << "Angka Yang Sering Diinputkan Adalah: " << modus << endl;
}

int main()
{
    judul();

    vector<int> nums;
    int modus;
    findModus(nums, modus);

    print(modus);

    return 0;
}
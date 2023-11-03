#include <iostream>

using namespace std;

int calcSalesTax(float purchase, float taxRate = 0.1);

int main(){
    float purchase;

    cout << "Enter the purchase amount: ";
    cin >> purchase;

    float tax = calcSalesTax(purchase);

    cout << "The sales tax is " << tax << endl;
}

int calcSalesTax(float purchase, float taxRate){
    return purchase * taxRate;
}
#include <iostream>
using namespace std;

int main(){
    int angkaAwal;
    cin >> angkaAwal;
    int angkaBaru = 0;

    while(angkaAwal != 0){
        int sisa   = angkaAwal%10;
        angkaAwal  = angkaAwal/10;
        angkaBaru  = angkaBaru*10 + sisa;
    }

    cout << angkaBaru;
}
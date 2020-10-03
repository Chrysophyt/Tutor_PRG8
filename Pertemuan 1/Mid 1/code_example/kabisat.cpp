#include <iostream>
using namespace std;

int main(){
    int tahun;
    cout << "Masukan tahun (4 digit) : ";
    cin >> tahun;

    //https://en.wikipedia.org/wiki/Leap_year#Algorithm
    if((tahun % 4) != 0 ){
        cout << "Tahun biasa";
    } else if (tahun%100 != 0) {
        cout << "Tahun kabisat";
    } else if (tahun%400 != 0) {
        cout << "Tahun biasa";
    } else {
        cout << "Tahun kabisat";
    }
    cout << "\n";

    //Dari Soal
    if((tahun%4==0 &&  tahun%100 != 0) || 
       (tahun%4==0 &&  tahun%100 == 0 && tahun%400==0)){
        cout << "Tahun kabisat";
    } else {
        cout << "Tahun biasa";
    }
    cout << "\n";

    //Simplification
    if((tahun%4==0 &&  tahun%100 != 0) || (tahun%400==0)){
        cout << "Tahun kabisat";
    } else {
        cout << "Tahun biasa";
    }
    return 0;
}


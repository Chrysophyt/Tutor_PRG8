#include<iostream>
#include<string>
using namespace std;

int main(){
    //Pertanyaan 1
    float suhu;
    cout << "Suhu Tubuh = ";
    cin >> suhu;

    //Pertanyaan 2
    string ispa;
    cout << "Mengalami Gejala ISPA = ";
    cin >> ispa;

    //Pertanyaan 3
    string riwayat_kontak;
    cout << "Mengalami riwayat kontak = ";
    cin >> riwayat_kontak;

    int n_gejala = 0;

    if (suhu>38) {
        n_gejala++; // n_gejala = n_gejala + 1 atau n_gejala += 1
    }

    if(ispa=="iya") {
        n_gejala++;
    }

    if(riwayat_kontak=="iya") {
        n_gejala++;
    }

    if(n_gejala == 0) {
        cout << "Tidak Suspek";
    } else {
        cout << "Suspek";
    }
}


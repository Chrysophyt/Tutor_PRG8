#include<iostream>
#include<string>

using namespace std;

struct NilaiMahasiswa{
    string nama;
    float nilai;
    NilaiMahasiswa (string namaInput, float nilaiInput){
        nama = namaInput;
        nilai = nilaiInput;
    }
};

int main(){
    NilaiMahasiswa arrayNilai[5] = {NilaiMahasiswa("budi", 70), NilaiMahasiswa("iwan", 81), NilaiMahasiswa("wati", 83), NilaiMahasiswa("Kaka", 75), NilaiMahasiswa("celine", 69)};

    for (int i = 0; i<5; i++){
        cout << arrayNilai[i].nama << " " << arrayNilai[i].nilai << "\n";
        //Lanjutkan Algoritma anda disini
    }
}

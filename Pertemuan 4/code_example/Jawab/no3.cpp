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

    float grade_frequency[2] = {2, 3}; // index pertama A, index kedua B

    for (int i = 0; i<5; i++){
        if(arrayNilai[i].nilai >= 80){
            grade_frequency[0]++;
        } else if (arrayNilai[i].nilai >= 60) {
            grade_frequency[1]++;
        }
    }

    //sum
    float total = grade_frequency[0]+grade_frequency[1];

    //change %
    grade_frequency[0]/=total;
    grade_frequency[1]/=total;

    //output
    cout << "A : "<<grade_frequency[0]*100<<"%\n";
    cout << "B : "<<grade_frequency[1]*100<<"%\n";


}

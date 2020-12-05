#include<iostream>
#include<string>

using namespace std;
enum JenisKelamin {Pria, Wanita};

struct Alamat {
    string jalan;
    string rt_rw;
    string kelurahan;
    string kecamatan;
};

struct DataPelamar {
    string nama;
    char nik[16]; //long long nik;
    string tanggal_lahir; //ISO Format YYYY-MM-DD
    JenisKelamin jenis_kelamin; //char jenis_kelamin[1] = 'L' / 'P' juga bisa
    Alamat alamat;
    string email;
    string nomor_telepon;
};

int main(){
    DataPelamar dataPelamar[100];
}
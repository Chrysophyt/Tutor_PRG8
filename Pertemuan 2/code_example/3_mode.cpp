#include <iostream>
using namespace std;

int main(){
	// Mengambil informasi berapa besar array
	int n_size;
	cout << "MasukanBesarArray:";
	cin >> n_size;
	
	// Mendeklarasi array
	string arr[n_size];
	// Alokasi dinamis dengan pointer
	// int *arr = new int[n_size];
	
	// Iterasi mengambil elemen-elemen yang ada
	for (int i = 0; i < n_size; i++) {
		cout <<"MasukanNilaiKe-"<<i<<":";
		cin >> arr[i];
	}
	
	// Menaruh karakter ke bucket
	int bucket[5] = {0, 0, 0, 0, 0};
	for (int i = 0; i < n_size; i++) {
		if(arr[i]=="A"){
			bucket[0]++;
		} else if (arr[i]=="B"){
			bucket[1]++;
		} else if (arr[i]=="C"){
			bucket[2]++;
		} else if (arr[i]=="D"){
			bucket[3]++;
		} else if (arr[i]=="E"){
			bucket[4]++;
		}
	}
	
	
	
	
	
	
	// Mencari frekuensi terbesar
	int highest_freq = 0;
	
	for (int i = 0; i < 5; i++) {
		cout<<" "<<bucket[i];
		if(highest_freq<bucket[i]){
			highest_freq = bucket[i];
		}
	}
	cout <<"\n";
	
	//Output hasil
	
	for (int i = 0; i < 5; i++) {
		if(highest_freq == bucket[i]){
			if (i == 0){
				cout << "A ";
			} else if(i == 1){
				cout << "B ";
			} else if(i == 2){
				cout << "C ";
			} else if(i == 3){
				cout << "D ";
			} else if(i == 4){
				cout << "E ";
			}
		}
	}
	
}
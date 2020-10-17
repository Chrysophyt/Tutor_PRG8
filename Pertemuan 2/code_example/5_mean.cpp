#include <iostream>
using namespace std;

int main(){
	// Mengambil informasi berapa besar array
	int n_size;
	cout << "Masukan besar array : ";
	cin >> n_size;
	
	// Mendeklarasi array
	int arr[n_size];
	// Alokasi dinamis dengan pointer
	// int *arr = new int[n_size];
	
	// Iterasi mengambil elemen-elemen yang ada
	for (int i = 0; i < n_size; i++) {
		cout <<"Masukan nilai Ke-"<<i<<" : ";
		cin >> arr[i];
	}
	
	// Menghitung Summation
	int sum = 0;
	for (int i = 0; i < n_size; i++) {
		sum += arr[i]; //sum = sum + arr[i]
	}
	
	// Menghitung Mean
	float mean = sum/float(n_size);
	
	//Output hasil
	cout << "Mean : "<<mean;
}
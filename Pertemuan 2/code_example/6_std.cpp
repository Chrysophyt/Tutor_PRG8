#include <iostream>
#include <cmath>
using namespace std;

int main(){
	// Mengambil informasi berapa besar array
	int n_size;
	cout << "Masukan besar array : ";
	cin >> n_size;
	
	// Mendeklarasi array
	float X[n_size];

	// Alokasi dinamis dengan pointer
	// int *arr = new int[n_size];

    cout << "Masukan Nilai : ";
	// Iterasi mengambil elemen-elemen yang ada
	for (int i = 0; i < n_size; i++) {
		cin >> X[i];
	}
	
	// Menghitung Summation
	int sum = 0;
	for (int i = 0; i < n_size; i++) {
		sum += X[i]; //sum = sum + arr[i]
	}
	
	// Menghitung Mean
	float mean = sum/float(n_size);
	
    int sum_xi_minus_mean_square = 0;

    // inner summation
	for (int i = 0; i < n_size; i++) {
		sum_xi_minus_mean_square += (X[i]-mean)*(X[i]-mean);
	}

    float std = sqrt(sum_xi_minus_mean_square/float(n_size-1));
    cout << std;
}


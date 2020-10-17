#include <iostream>
using namespace std;

int main(){
    // Mengambil informasi berapa besar array
	int n_size;
	cout << "MasukanBesarArray:";
	cin >> n_size;
	
	// Mendeklarasi array
	int arr[n_size];

    // Stack (memory)                   Heap
    // 1-1-1-X[?]-1-1 ->>>>>>>>>>>>>>>>>X[n_size]

	// Alokasi dinamis dengan pointer
	// int *arr = new int[n_size];
	
	// Iterasi mengambil elemen-elemen yang ada
	for (int i = 0; i < n_size; i++) { // 0 1 2 3 .. (n_size -1)
		cout <<"MasukanNilaiKe-"<<i<<":";
		cin >> arr[i];
	}

    // initialization
    int x_max = arr[0];
    int x_min = arr[0];

    for (int i = 1; i < n_size; i++){
        if(arr[i] < x_min){
            x_min = arr[i];
        }

        if(arr[i] > x_max){
            x_max = arr[i];
        }
    }

    cout << x_min << " " << x_max;
}
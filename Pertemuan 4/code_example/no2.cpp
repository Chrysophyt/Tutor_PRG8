#include<iostream>
using namespace std;



int hitung (int a, int b) {
    // int e[10] = {6, 7, 4, 5, -1, 4, -1, 3, 1, 9};
    int e[10] = {6, 7, 4, 5, 1, 4, 2, 6, -1, 8};
	if (a == b) {
		return 1;
	} else if (e[a] == -1) {
		return 0;
    } else {
        return 2 * hitung(e[a], b);
    }
}

int main(){
    cout << hitung(8, 4);
}


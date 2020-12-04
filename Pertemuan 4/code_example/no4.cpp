#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    //int arrNilai[n];
    float *arrNilai = new float[n];

    //input
    for (int i=0; i < n; i++){
        cin >> arrNilai[i];
    }

    //Buatlah Algoritma

    // for (int i=0; i < n; i++){
    //     cout << arrNilai[i] << " ";
    // }
}
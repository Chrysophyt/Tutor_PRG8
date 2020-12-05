#include<iostream>
#include<cmath>

using namespace std;

void insertionSort(float arr[], int n)  
{  
    int i, j;
    float key;
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
  
        /* Move elements of arr[0..i-1], that are  
        greater than key, to one position ahead  
        of their current position */
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
}  

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
    // 1. Sort
    insertionSort(arrNilai, n);
    // arrNilai = 80 80 89 89 89.5 89.5 89.5 90 90 90.5

    // 2. Cek kanan array apabila berbeda output current
    //    jika sama naikan frekuensi
    float current = arrNilai[0];
    int frequency = 1;

    for (int i = 0; i < n; i++) {
        if(arrNilai[i+1]==current){
            frequency++;
        } else {
            cout << current << " " << frequency<<"\n";
            current = arrNilai[i+1];
            frequency = 1;
        }
    }
}
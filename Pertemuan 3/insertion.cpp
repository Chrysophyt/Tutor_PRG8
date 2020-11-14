#include <iostream>
using namespace std; 
//Geeksforgeeks
/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)  
{  
    int i, key, j, nSwap;  
    nSwap = 0;
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
  
        /* Move elements of arr[0..i-1], that are  
        greater than key, to one position ahead  
        of their current position */
        while (j >= 0 && arr[j] > key) 
        {   
            nSwap+=1;
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
    cout<<"Banyak tukar " << nSwap<<"\n";
}  
  
// A utility function to print an array of size n  
void printArray(int arr[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout << arr[i] << " ";  
    cout << endl; 
}  
  
/* Driver code */
int main()  
{  
    int arr[] = {25, 73, 41, 30, 58, 64, 98, 13, 87, 91, 17, 76, 28, 45, 56};  
    int n = sizeof(arr) / sizeof(arr[0]);  
  
    insertionSort(arr, n);  
    printArray(arr, n);  
  
    return 0;  
}  
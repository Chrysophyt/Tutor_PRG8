#include <iostream>
#include <string>
using namespace std;

int main(){
    // Deklarasi variabel string bernama inputText
	string inputText;

    // input dari console masukan langsung kepada inputText
    // getline() function <string> mengambil 1 baris sekaligus
    getline(cin, inputText);

    int n_size = inputText.length();

    bool palindrome = true;
    for(int i = 0; i < n_size/2; i++){
        cout << 
        i           <<" "<< inputText[i]          << " "<<
        (n_size-1-i)<<" "<< inputText[n_size-1-i] << "\n";

        if( inputText[n_size-1-i] != inputText[i]){
            palindrome = false;
            //dapat langsung keluar loop menggunakan break
            //break;
        }
    }

    if(palindrome){
        cout << "palindrome";
    } else {
        cout << "bukan palindrome";
    }

}
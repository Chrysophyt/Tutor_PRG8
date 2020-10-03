#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float a, b, c;
    cout << "Masukan a : ";
    cin >> a;
    cout << "Masukan b : ";
    cin >> b;
    cout << "Masukan c : ";
    cin >> c;

    //syarat segitiga
    if((c>=(a+b)) || (a>=(b+c)) || (b>=(a+c))){
        cout << "tidak membentuk segitiga\n";
        return 0;
    }

    bool unique = false;
    //syarat sama kaki
    if((a==b)&(b!=c) || (a==c)&(a!=b) || (b==c)&(b!=a)){
        unique = true;
        cout << "segitiga sama kaki\n";
    } 

    //syarat sama sisi
    if((a==b)&(b==c)){
        unique = true;
        cout << "segitiga sama sisi\n";
    } 

    //syarat sama siku-siku
    if((sqrt(a*a+b*b)==c) || (sqrt(a*a+c*c)==b) || (sqrt(b*b+c*c)==a)){
        unique = true;
        cout << "segitiga siku-siku\n";
    } 

    if(unique==false){
        cout << "segitiga sembarang\n";
    }
}




#include<iostream>
#include<cmath>

using namespace std;

int main(){
    float a, b, c, x1, x2, temp;

    cin >> a;
    cin >> b;
    cin >> c;


    if((b*b)<(4*a*c)) {
        cout << "x bernilai imaginer";
    } else if (b*b == 4*a*c) {
        float hasil = (-b)/(2*a);
        cout << "x = " << hasil;
    } else {
        temp = sqrt((b*b)-(4*a*c));
        x1 = (-b+temp)/(2*a);
        x2 = (-b-temp)/(2*a);
        cout << "x1 : " << x1 << endl;
        cout << "x2 : " << x2;
    }
}   


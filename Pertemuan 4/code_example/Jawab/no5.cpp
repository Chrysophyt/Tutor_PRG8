#include<iostream>
#include<cmath>

int n = 15;
int data[15] = {13,17,25,28,30,41,45,56,58,64,73,76,87,91,98};

int L=0; int R=n-1;
int buffer=0;


int main (){
    int findx;
    std::cin >> findx;

    while (L<=R) {
        int M = floor((L+R)/2);
        buffer = buffer + data[M];

        if (data[M]==findx){
            break;
        } else if(data[M]<findx) {
            L = M+1;
        } else {
            R = M-1;
        }
        std::cout << L << " " << R << " " << M << " " << buffer <<"\n";
    }

    std::cout << buffer;
}

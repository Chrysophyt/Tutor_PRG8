#include<iostream>

int main() {
    int alpha;
    int ar[5] = {51, 17, 22, 91, 40};
    int *beta, *gama;
    beta = ar;
    gama = &alpha;

    for (int i = 0; i<5; i++) {
        alpha = ar[i];
        if((ar[i]%2)==0) {
            alpha = *beta;
            *gama = alpha + *gama;

        } else {
            beta++;
            //std::cout<<"beta : "<<*beta<<'\n';
        }
        std::cout<<alpha<<'\n';
    }
}
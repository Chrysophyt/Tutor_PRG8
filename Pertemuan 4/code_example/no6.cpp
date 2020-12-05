#include<iostream>

int main() {
    int alpha;
    int ar[5] = {51, 17, 22, 91, 40};
    int *beta, *gama;
    beta = ar;      //beta address array sama dengan ar
    gama = &alpha;  //gama isi address alpha

    for (int i = 0; i<5; i++) {
        alpha = ar[i]; // alpha = 40%2
        if((ar[i]%2)==0) {
            alpha = *beta;  //alpha = 91
            *gama = alpha + *gama;   //isi gama = alpha + isi gama
            
        } else {
            beta++; //*(beta+0)  beta[0]
            //std::cout<<"beta : "<<*beta<<'\n';
        }
        std::cout<<alpha<<'\n';
    }
}
// 51 //*beta = beta[1] = ar[1]
// 17 //*beta = beta[2] = ar[2]
// 44 //*gama = alpha + *gama yaitu 22 +22
// 91 //*beta = beta[3] = ar[3]
// 182 //*gama = alpha + *gama yaitu 91 +91

// beta++ -> (beta+1)
//  *beta -> beta[1]
// beta++ -> (beta+1)
//  *beta -> beta[2]
// beta++ -> (beta+1)
//  *beta -> beta[3]
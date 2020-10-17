#include <iostream>
using namespace std;

int main(){
    int x = 126, ans = 0, i = 1;

    while (i <= x){
        if (x%i == 0){
            ans = ans + i;
            cout << i << " ";
        }
        i = i+1;
    }
    cout << ans << "\n";

}
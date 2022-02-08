#include <iostream>

using namespace std;

int main() {

    int n = 20;
    int temp = 4;
    int sum = 1;
    while (temp <= n) {
        if (temp % 8 == 0) {
            sum*=-1*temp;
        }
        else {
            sum*=temp;
        }
    }

    cout << sum;





    return 0;
}


#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "n: ";
    cin >> n;

    int i = 1;
    int sum = 0;
    while (i <= n) {
        int counter = 1;
        int tempSum = 1;
        while (counter <= i) { // silnia
            tempSum *= counter;
            counter++;
        }
        sum += tempSum;

        i++;
    }

    cout << "sum: " << sum << endl;



    return 0;
}


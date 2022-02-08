#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "n: ";
    cin >> n;

    float top = 0;
    int counter = 0;
    while (counter < n) {
        top+=counter+1;
        counter++;
    }

    float bot = 1;
    counter = 0;

    while (counter < n) {
        bot *= (counter*2) + 2;
        counter++;
    }

    cout << top << "/" << bot << " = " << top/bot;


    return 0;
}


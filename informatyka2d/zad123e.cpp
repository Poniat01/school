#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "n: ";
    cin >> n;

    double topSum = 1;
    int topTemp = 0;
    
    while (topTemp < n) {
        topSum *= topTemp*0.5 + 2;

        topTemp++;
    }

    cout << "topSum: " << topSum << endl;

    double botSum = 1;
    double botTemp = 1;

    while (botTemp <= n) {
        cout << "1" << endl;
        double toDivideBy = (botTemp-1)*10;
        cout << "toDivideBy: " << toDivideBy << endl;
        if (toDivideBy == 0) {
            botSum *= -3;
        }
        double temp = -3 / toDivideBy;
        botSum *= temp;

        botTemp++;
    }

    cout << "botSum: " << botSum << endl;

    cout << topSum << "/" << botSum << " = " << topSum / botSum << endl;


    return 0;
}


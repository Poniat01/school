#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "n: ";
    cin >> n;

    int topStart = 2;
    int topCounter = 0;
    float topSum = 0;

    while (topCounter < n) {
        if (topCounter % 2 == 0) {
            topSum-=topStart;
        }
        else 
            topSum += topStart;

        topStart+=5;
        topCounter++;
    }

    int botStart = 3;
    int botCounter = 0;
    float botSum = 1;

    while (botCounter < n) {
        if (botCounter % 2 == 0) {
            botSum *= botStart;
        }
        else 
            botSum *= -1 * botStart;

        botStart+=4;
        botCounter++;
    }

    cout << topSum << "/" << botSum << " = " << topSum/botSum;

    return 0;
}


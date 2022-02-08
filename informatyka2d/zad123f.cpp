#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "n: ";
    cin >> n;

    int topOutterCounter = 1;
    float topFinalSum = 0;

    while (topOutterCounter <= n) {
        int topInnerCounter = 1;
        int topTempSum = 1;
        while (topInnerCounter <= topOutterCounter) {
            topTempSum*= topInnerCounter;
            topInnerCounter++;
        }
        
        if (topOutterCounter % 2 == 1) {
            topFinalSum += topTempSum;
        }
        else {
            topFinalSum -= topTempSum;
        }

        topOutterCounter++;
    }


    //int botStart = -0.2;
    int botCounter = 0;
    float botSum = -0.2;

    while (botCounter < n) {
        botSum += botCounter*0.3;

        botCounter++;
    }

    cout << topFinalSum << "/" << botSum << " = " << topFinalSum / botSum;
    


    return 0;
}


#include <iostream>

using namespace std;

int main() {

    //a

    int k = 2, i = 1, s = 0;

    int n;
    cout << "podaj ile: ";
    cin >> n;

    while(i <= n) {
        if(i % 2 != 0)
            s = s - k;
        else
            s = s + k;
        k += 3;
        i++;
    }

    cout << s << "\n\n";






    //b

    k = 4, i = 1, s = 1;
    cout << "podaj ile: ";
    cin >> n;



    while(i <= n) {
        if(i % 2 != 0)
            s = s * k;
        else
            s = s * (-k);
        k += 4;
        i++;
    }

    cout << s << "\n\n";









    return 0;
}
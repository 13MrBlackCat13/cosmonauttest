#include <iostream>
using namespace std;

int main() {
    int vision;
    int height;
    cin >> vision;
    cin >> height;

    if (vision == 100 && height <= 75 && height >= 62 ) {
        cout << "passed";
    } else {
        cout << "failed";
    }
    return 0;
}

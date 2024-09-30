#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int number;
        cin >> number;

        if (number == 0) {
            cout << "0" << endl;
            continue;
        }

        bool first = true;
        while (number > 0) {
            if (!first) {
                cout << " ";
            }
            cout << number % 10;
            number /= 10;
            first = false;
        }
        cout << endl;
    }

    return 0;
}

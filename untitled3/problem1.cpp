#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 1 || n > 9) {
        cout << "Enter numbers between 0 and 10" << endl;
        return 1;
    }

    for (int i = n; i >= 1; i--) {

        for (int j = 1; j <= i; j++) {
            cout << j;
        }


        int space = (n - i) * 2;
        for (int j = 1; j <= space; j++) {
            cout << " ";
        }


        for (int j = i; j >= 1; j--) {
            cout << j;
        }


        cout << endl;
    }

    return 0;
}

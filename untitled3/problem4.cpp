#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    int floor = 1;

    if (n > 2) {
        n -= 2;
        floor= 2;

        while (n > x) {
            n -= x;
            floor++;
        }
    }


    cout << floor << endl;

    return 0;
}

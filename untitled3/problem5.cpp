#include <iostream>
using namespace std;


bool bb(int num) {
    return (num % 3 == 0) || (num % 10 == 3);
}
int main() {
    int N;
    cin >> N;
    int count = 0;
    int cur = 1;
    while (true) {

        if (!bb(cur)) {
            count++;

            if (count == N) {
                cout << cur << endl;
                break;
            }
        }
        cur++;
    }

    return 0;
}

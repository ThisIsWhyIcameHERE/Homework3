#include <iostream>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    int totalSum = 0;

    for (int i = 1; i <= N; i++) {
        int current = i;
        int digitSum = 0;

        while (current > 0) {
            digitSum += current % 10;
            current /= 10;
        }


        if (digitSum >= A && digitSum <= B) {
            totalSum += i;
        }
    }


    cout  << totalSum << endl;

    return 0;
}

#include <iostream>
#include <vector>

using namespace std;
#define int long long

int calculatePower(int base, int exponent, int modulo) {
    int result = 1;
    base = base % modulo;

    if (base == 0)
        return 0;

    while (exponent > 0) {
        if (exponent & 1)
            result = (result * base) % modulo;

        exponent = exponent >> 1;
        base = (base * base) % modulo;
    }
    return result;
}

int32_t main() {
    int numTests;
    cin >> numTests;
    while (numTests--) {
        int arraySize;
        cin >> arraySize;
        vector<int> numbers(arraySize);
        for (int i = 0; i < arraySize; i++) {
            cin >> numbers[i];
        }
        int evenCount = 0;
        for (auto number : numbers) {
            if (number % 2 == 0)
                evenCount++;
        }
        int modulo = 1e9 + 7;
        if (evenCount == arraySize) {
            cout << (calculatePower(2, evenCount, modulo) - 1) % modulo << endl;
        } else {cout << calculatePower(2, evenCount, modulo) % modulo << endl;
        }
    }
    return 0;
}
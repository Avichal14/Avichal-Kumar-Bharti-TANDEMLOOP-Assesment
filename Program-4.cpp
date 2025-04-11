#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    vector<int> numbers = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};
    map<int, int> multiplesCount;

    // Initialize counts for 1 through 9
    for (int i = 1; i <= 9; ++i) {
        multiplesCount[i] = 0;
    }

    // Count multiples
    for (int num : numbers) {
        for (int i = 1; i <= 9; ++i) {
            if (num % i == 0) {
                multiplesCount[i]++;
            }
        }
    }

    // Print results
    for (int i = 1; i <= 9; ++i) {
        cout << i << ": " << multiplesCount[i] << endl;
    }

    return 0;
}

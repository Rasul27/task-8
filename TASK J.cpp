#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n, k;

    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int divisible = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((arr[i] + arr[j]) % k == 0) {
                divisible++;
            }
        }
    }

    cout << divisible;

    return 0;
}

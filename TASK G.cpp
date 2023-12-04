#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    int countgrt = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    double totalaverage = static_cast<double>(sum) / n;

    sum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > totalaverage) {
            countgrt++;
            sum += arr[i];
        }
    }

    cout << sum << " " << countgrt;
    return 0;
}

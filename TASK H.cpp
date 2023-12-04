#include <iostream>
using namespace std;

int main() {
    int a;
    int arr[100];
    cin >> a;

    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < a - 1; i += 2) {
        swap(arr[i], arr[i + 1]);
    }

    for (int i = 0; i < a; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Masukkan nilai n: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i += 2) {
        sum += i * i;
    }

    cout << "n : " << n << " = " << sum << endl;
    return 0;
}

#include <iostream>
using namespace std;

double func(int n, double x) {
    double j0 = 1.0;
    double j1 = 2.0;
    if (n == 0) {
        return j1;
    }
    double jn1;

    for (int i = 1; i <= n; i++) {
        jn1 = (2.0 * i / x) * (j1 - j0);
        j0 = j1;
        j1 = jn1;
    }
    return jn1;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    double x;

    cout << "Введите n и x: ";
    cin >> n >> x;

    double result = func(n, x);

    cout << "J_" << n + 1 << "(x) = " << result;

    return 0;
}
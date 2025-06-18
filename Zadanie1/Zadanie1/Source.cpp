#include <iostream>
#include <cmath>
#include <string>

using namespace std;

double sum(int n) {
    double result = 0;
    for (int i = 1; i <= n; i++) {
        result += (5 * i + sqrt(5 * i)) / (sqrt(7 * i) + 7 * i);
    }
    return result;
}

int main() {
    setlocale(LC_ALL, "Russian");

    string previous = " ";
    string current;
    int n;
    cout << "¬ведите натуральное число n: ";
    cin >> n;
    cout << "«начение sum дл€ n = " << n << " равно: " << sum(n) << endl;
    return 0;
}

#include <iostream>

using namespace std;

void calc(int num1, int num2, int *sum);

int main() {
    int num1 = 5;
    int num2 = 10;
    int sum = 0;
    calc(num1, num2, &sum);
    cout << "Значение после суммы: " << sum << endl;
    return 0;
}

void calc(int num1, int num2, int *sum) {
    *sum = num1 + num2;
}
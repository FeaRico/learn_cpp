#include <iostream>

using namespace std;

int add(int, int);

int subtract(int, int);

int operation(int(*)(int, int), int, int);

int main() {
    int num1(15), num2(10);
    int (*operations[2])(int, int) = {add, subtract};

    for (auto &operation : operations) {
        cout << operation(num1, num2) << endl;
    }

    cout << "Сложение: " << operation(add, num1, num2) << endl;

    return 0;
}

int add(int num1, int num2) {
    return num1 + num2;
}

int subtract(int num1, int num2) {
    return num1 - num2;
}

int operation(int(*op)(int, int), int num1, int num2) {
    return op(num1, num2);
}
#include <iostream>

using namespace std;

int main() {
    char c = '*';
    cout << "Символ: " << c << endl;
    char &refC = c;
    cout << "Ссылка на символ: " << refC << endl;
    char *pointerC = &c;
    cout << "Указатель на символ: " << pointerC << endl;
    int *intPointerC = (int *) &c;
    cout << "Указатель на символ (int): " << intPointerC << endl;
    return 0;
}

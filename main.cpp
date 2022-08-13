#include <iostream>

using namespace std;

int main() {
    int d = 15;
    int *pointerD = &d;
    cout << "До инкремента указателя d (ссылка): " << pointerD << endl;
    cout << "До инкремента указателя d (значение): " << *pointerD << endl;
    pointerD++;
    cout << "После инкремента указателя d (ссылка): " << pointerD << endl;
    cout << "После инкремента указателя d (значение): " << *pointerD << endl;

    cout << "До декремента указателя d (ссылка): " << pointerD << endl;
    cout << "До декремента указателя d (значение): " << *pointerD << endl;
    pointerD--;
    cout << "После декремента указателя d (ссылка): " << pointerD << endl;
    cout << "После декремента указателя d (значение): " << *pointerD << endl;
    return 0;
}

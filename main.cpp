#include <iostream>

using namespace std;

int main() {
    int array[] = {1, 2, 3, 4, 5};
    cout << "Первый элемент (ссылка): " << array << endl;
    cout << "Первый элемент (значение): " << *array << endl;
    int *twoElementPtr = array + 1;
    cout << "Второй элемент (ссылка):" << twoElementPtr << endl;
    cout << "Второй элемент (значение):" << *twoElementPtr << endl;
    int *threeElementPtr = array + 2;
    cout << "Третий элемент (ссылка):" << threeElementPtr << endl;
    cout << "Третий элемент (значение):" << *threeElementPtr << endl;

    cout << "Перебор элементов массива" << endl;

    for (int *ptr = array, i = 1; ptr <= &array[4]; ptr++) {
        cout << "Ссылка " << i << " элемента: " << ptr << endl;
        cout << "Значение " << i << " элемента: " << *ptr << endl;
        i++;
    }
    return 0;
}

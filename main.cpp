#include <iostream>

using namespace std;

void changeFirstElementOnArray(int *_array);

int main() {
    int array1[] = {1, 2, 3, 4, 5};

    changeFirstElementOnArray(array1);
    cout << "Значение после изменения первого элемента: " << array1[0] << endl;
    return 0;
}

void changeFirstElementOnArray(int *array) {
    array[0] = 999;
}

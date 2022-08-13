#include <iostream>

int main() {
    int a = 12;
    int &refA = a;
    std::cout << "Ссылка до изменения:  " << &refA << std::endl;
    std::cout << "Значение по ссылке: " << refA << std::endl;
    refA = 20;
    std::cout << "Ссылка после изменения: " << &refA << std::endl;
    std::cout << "Значение по ссылке: " << refA << std::endl;
    int b = a;
    b = 40;
    std::cout << "Ссылка копии A: " << &b << std::endl;
    std::cout << "Ссылка А: " << &refA << std::endl;
    std::cout << "Значение копии A: " << b << std::endl;
    std::cout << "Значение A: " << a << std::endl;
    int *pointerA = &a;
    *pointerA = 23;
    std::cout << "Указатель A: " << &pointerA << std::endl;
    std::cout << "Значение указателя A: " << *pointerA << std::endl;
    std::cout << "Значение A: " << a << std::endl;
    return 0;
}

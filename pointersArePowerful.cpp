#include <iostream>

int pointerBasics() {
    int a{10};
    int *p{&a};
    std::cout << "Address in pointer p: " << p << '\n';
    std::cout << "Value of a using pointer p: " << *p << std::endl;
    *p = 20;
    std::cout << "New value of a: " << a << '\n';
    std::cout << '\n';
    return 0;
}

void pointerArithmetic() {
    int arr[5]{1, 2, 3, 4, 5};
    int *p = arr;
    for (int i = 0; i < 5; i++) {
        std::cout << "Address of cookies[" << i << "]: " << (p + i) <<'\n';
        std::cout << "Value of cookies[" << i << "]: " << *(p + i) << '\n';
    }
}

int main() {
    pointerBasics();
    pointerArithmetic();
}
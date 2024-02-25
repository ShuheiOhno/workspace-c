#include <cstdio>
#include <iostream>

int main() {
    int num;
    int arr[num];

    std::cout << "要素数は：";
    std::cin >> num;
    for(int i = 0; i < num; i++) {
        std::cin >> arr[i];
    }
    for (int i = 0; i < num; i++) {
        std::cout << arr[i];
    }

    return 0;
}
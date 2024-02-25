#include <cstdio>
#include <iostream>

int main() {
    int num;
    std::cout << "要素数は：";
    std::cin >> num;

    int arr[num];
    
    for(int i = 0; i < num; i++) {
        std::cin >> arr[i];
    }
    for (int i = 0; i < num; i++) {
        std::cout << i << "番目:" << arr[i] <<"\n";
    }

    return 0;
}
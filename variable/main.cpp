#include <iostream>

int main() {
    // Jika ingin menukar nilai dari a ke b dan b ke a
    int file_data = 1;
    int file_system = 2;
    int temp = file_data;

    file_data = file_system;
    file_system = file_data;

    std::cout << file_data;

    return 0;
}


#include <iostream>

int main(int args, char* argv[]) {

    for (int i = 0; i < std::stoi(argv[1]); i++) {
        int* memory = new int;
        delete memory;
    }

    return 0;
}
#include <chrono>
#include <iostream>

using namespace std::chrono;
int main() {
    // create array
    const int size = 4;
    static int x[size][size];

    auto t1 = high_resolution_clock::now();
    for (int i = 0; i < size; i++) {
        for (int j = 0; j <size; j++) {
            x[j][i] = i + j;
            std::cout << &x[j][i] << ": i=" << i << ", j=" << j << std::endl;
        }
    }

    //print execution time to console
    auto t2 = high_resolution_clock::now();
    auto duration = duration_cast<std::chrono::microseconds>(t2 - t1).count();
    std::cout << "Execution time: " << duration << " microseconds" << std::endl;

    return 0;
}
#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

void BigLoop() {
    for (int i = 0; i <= 50000; i++) {
        for (int j = 0; j <= 50000; j++) {
            int x = (i + j) * 2 + (i / j);
        }
    }
}

int main() {
    system_clock::time_point start = system_clock::now();

    BigLoop();

    system_clock::time_point end = system_clock::now();

    duration<double> sec = end - start;

    hours hour = duration_cast<hours>(end - start);
    milliseconds milliSec = duration_cast<milliseconds>(end - start);
    microseconds microSec = duration_cast<microseconds>(end - start);
    nanoseconds nanoSec = end - start;

    cout << sec.count() << endl;
    /*
    cout << hour.count() << endl;
    cout << milliSec.count() << endl;
    cout << microSec.count() << endl;
    cout << nanoSec.count() << endl;
     */
}
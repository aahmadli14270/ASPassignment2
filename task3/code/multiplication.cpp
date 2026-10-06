#include <iostream>
#include <cassert>
#include <chrono>
using namespace std;
using namespace std::chrono;

int matrix1[2][2] = {{2, 2}, {4, 4}};
int matrix2[2][2] = {{6, 6}, {8, 8}};
int result[2][2] = {{0, 0}, {0, 0}};

int main() {

    auto start = high_resolution_clock::now();

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    auto end = high_resolution_clock::now();

    auto duration = duration_cast<nanoseconds>(end - start);

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << result[i][j] << "  ";
        }
        cout << endl;
    }

    assert(result[0][0] == 28);
    assert(result[0][1] == 28);
    assert(result[1][0] == 56);
    assert(result[1][1] == 56);

    cout << "TESTS ALRIGHT" << endl;
    cout << "nanoseconds: " << duration.count();

    return 0;
}
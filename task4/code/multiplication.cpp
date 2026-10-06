#include <iostream>
using namespace std;

int main() {

    int matrix[4][4] = {
        {10, 8, 7, 4},
        {3, 6, 6, 8},
        {9, 13, 14, 12},
        {19, 12, 15, 18}
    };

    int result[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = matrix[i + 1][j + 1];
        }
    }


    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
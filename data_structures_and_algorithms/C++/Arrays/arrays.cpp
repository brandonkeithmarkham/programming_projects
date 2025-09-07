#include "arrays.h"

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm> // std::swap

using std::cout;
using std::endl;

void Shuffle(int array[][N]) {
    int setOfElements[12];
    int index = 0;

    // 1..12
    for (int i = 1; i <= 12; ++i) setOfElements[i - 1] = i;

    // Fisher–Yates shuffle
    for (int i = 11; i > 0; --i) {
        int j = std::rand() % (i + 1);
        std::swap(setOfElements[i], setOfElements[j]);
    }

    // Fill the 3x3 with first 9 shuffled numbers
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            array[i][j] = setOfElements[index++];
}

void populateArrays(int array1[][N], int array2[][N]) {
    Shuffle(array1);
    Shuffle(array2);
}

void addArrays(int a[][N], int b[][N], int out[][N]) {
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            out[i][j] = a[i][j] + b[i][j];
}

void multiplyArrays(int a[][N], int b[][N], int out[][N]) {
    // zero
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            out[i][j] = 0;

    // classic triple loop
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            for (int k = 0; k < N; ++k)
                out[i][j] += a[i][k] * b[k][j];
}

void display(int a[][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) cout << a[i][j] << ' ';
        cout << "\n\n";
    }
    cout << endl;
}

void transposeArray(int a[][N], int t[][N]) {
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            t[j][i] = a[i][j];

    cout << "Transpose of Array 1 \n\n\n";
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j) {
            cout << t[i][j] << ' ';
            if (j == N - 1) cout << "\n\n";
        }
}

// Determinant of 3x3 (fixed your d3 minor)
// d = a00(a11 a22 − a12 a21) − a01(a10 a22 − a12 a20) + a02(a10 a21 − a11 a20)
int determinant(int a[][N]) {
    int d1 = a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1]);
    int d2 = a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0]);
    int d3 = a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]); // FIX
    return d1 - d2 + d3;
}

void sumOfRows(int a[][N]) {
    int total = 0;
    cout << "\nFinding Sum of each row:\n\n";
    for (int i = 0; i < N; ++i) {
        total = 0;
        for (int j = 0; j < N; ++j) total += a[i][j];
        cout << "Sum of the row " << i << " = " << total << endl;
    }
}

void sumOfColumns(int a[][N]) {
    int total = 0;
    cout << "\nFinding Sum of each column:\n\n";
    for (int i = 0; i < N; ++i) {
        total = 0;
        for (int j = 0; j < N; ++j) total += a[j][i];
        cout << "Sum of the column " << i << " = " << total << endl;
    }
}

void sumOfDiagonals(int a[][N]) {
    int d1 = 0, d2 = 0;
    for (int i = 0; i < N; ++i) {
        d1 += a[i][i];
        d2 += a[i][N - 1 - i];
    }
    cout << "The sum of the fist diagonal of Array_1" << std::setw(6)
         << " = " << std::setw(4) << d1 << endl;
    cout << "The sum of the second diagonal of Array_1" << std::setw(4)
         << " = " << std::setw(4) << d2 << endl;
}

int specialNumber(int row, int col) {
    // Keep your original formula; use integers to avoid float round-off.
    return row * ((col * col) + 1) / 2;
}

int isSpecialArray(int a[][N], int snum) {
    int total = 0;

    // rows
    for (int i = 0; i < N; ++i) {
        total = 0;
        for (int j = 0; j < N; ++j) total += a[i][j];
        if (total != snum) return 1;
    }

    // cols
    for (int i = 0; i < N; ++i) {
        total = 0;
        for (int j = 0; j < N; ++j) total += a[j][i];
        if (total != snum) return 1;
    }

    // diag 1
    total = 0;
    for (int i = 0; i < N; ++i) total += a[i][i];
    if (total != snum) return 1;

    // diag 2 (FIX: use anti-diagonal, not a[i][i] again)
    total = 0;
    for (int i = 0; i < N; ++i) total += a[i][N - 1 - i];
    if (total != snum) return 1;

    return 0;
}

void displayArrayFunctions() {
    int row = N, col = N;

    int array_1[N][N];
    int array_2[N][N];
    int array_3[N][N];
    int transposition[N][N];

    // Seed RNG once here (your original seeded inside this function too)
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    populateArrays(array_1, array_2);
    addArrays(array_1, array_2, array_3);

    cout << "Array 1  :\n\n\n";
    display(array_1);

    cout << "Array 2  : \n\n\n";
    display(array_2);

    cout << "Sum of Array 1 and Array 2  : \n\n\n";
    display(array_3);

    multiplyArrays(array_1, array_2, array_3);
    cout << "Product of Array 1 and Array 2 \n\n\n";
    display(array_3);

    transposeArray(array_1, transposition);

    cout << "Determinate of Array 1 = " << determinant(array_1) << "\n\n";

    sumOfRows(array_1);
    cout << "\n\n";
    sumOfColumns(array_1);
    cout << "\n\n";
    sumOfDiagonals(array_1);
    cout << "\n\n\n";

    cout << "The special number for Array 1 is: " << specialNumber(row, col) << "\n\n\n";

    int specArray = isSpecialArray(array_1, specialNumber(row, col));
    if (specArray != 0)
        cout << "Array 1 is not a special array \n\n" << endl;
    else
        cout << "Array 1 is a special array \n\n";
}

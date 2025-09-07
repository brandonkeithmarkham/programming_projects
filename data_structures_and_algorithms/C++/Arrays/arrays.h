#ifndef ARRAY_APP_H
#define ARRAY_APP_H

// 3x3 fixed-size matrices everywhere
constexpr int N = 3;

// Top-level driver (prints everything, like your original)
void displayArrayFunctions();

// Core ops (kept same names/behavior)
void populateArrays(int a[][N], int b[][N]);
void display(int a[][N]);
void addArrays(int a[][N], int b[][N], int out[][N]);
void multiplyArrays(int a[][N], int b[][N], int out[][N]);
void transposeArray(int a[][N], int t[][N]);
int  determinant(int a[][N]);
void sumOfRows(int a[][N]);
void sumOfColumns(int a[][N]);
void sumOfDiagonals(int a[][N]);
int  specialNumber(int row, int col);
int  isSpecialArray(int a[][N], int snum);

// helper used by populate
void Shuffle(int a[][N]);

#endif // ARRAY_APP_H

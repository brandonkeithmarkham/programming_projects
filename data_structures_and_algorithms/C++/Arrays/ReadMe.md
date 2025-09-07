# 3×3 Array Operations (C++)

A small console program that demonstrates **passing arrays to functions** by operating on two 3×3 integer arrays (matrices). The app generates randomized arrays, prints them, performs arithmetic, and evaluates whether an array is “special” per the assignment’s definition.

## Features
- Generate two 3×3 arrays with **distinct random numbers** (1–12), using a Fisher–Yates shuffle.
- **Display** both arrays.
- **Add** element-wise: `Array3 = Array1 + Array2`.
- **Multiply** matrices: `Array3 = Array1 × Array2`.
- **Transpose** `Array1` and print the transposed matrix.
- Compute and print the **determinant** of `Array1` (3×3).
- Compute and print the **sum of rows**, **sum of columns**, and **sum of both diagonals** of `Array1`.
- Compute the **special number** `S = row * (col² + 1) / 2` (for 3×3, `row=col=3`) and check whether `Array1` is a **special array** (all row sums, column sums, and both diagonal sums equal `S`).



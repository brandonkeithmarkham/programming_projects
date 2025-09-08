# 🔢 Sorting & Searching Benchmark Suite

This project benchmarks several classic sorting algorithms in C++ using templated implementations.  
It was developed as part of **CS 3358: Data Structures** at Texas State University.

The program demonstrates **algorithm analysis in practice** by comparing runtimes, swap counts, and recursion counts across different input sizes.

---

## 📚 Algorithms Implemented

- **Selection Sort** (O(N²))
- **Bubble Sort** (O(N²))
- **Insertion Sort** (O(N²), but efficient on nearly sorted data)
- **Merge Sort** (O(N log N), stable)
- **Quick Sort** (O(N log N) average, O(N²) worst case)
  - Middle element pivot
  - Third element pivot

---

## ⏱️ Time Complexity Table

| Algorithm               | Best Case   | Average Case | Worst Case   | Space Complexity |
|--------------------------|-------------|--------------|--------------|------------------|
| Selection Sort           | O(N²)       | O(N²)        | O(N²)        | O(1)             |
| Bubble Sort              | O(N)        | O(N²)        | O(N²)        | O(1)             |
| Insertion Sort           | O(N)        | O(N²)        | O(N²)        | O(1)             |
| Merge Sort               | O(N log N)  | O(N log N)   | O(N log N)   | O(N)             |
| Quick Sort (mid pivot)   | O(N log N)  | O(N log N)   | O(N²)        | O(log N)         |
| Quick Sort (third pivot) | O(N log N)  | O(N log N)   | O(N²)        | O(log N)         |

---

## 📊 Sample Benchmark (N = 1000)

```text
Character Array Selection Sort: Avg Time = 836.44 µs
Integer Array Selection Sort: Avg Time = 879.33 µs
Character Array Bubble Sort: Avg Time = 2336.13 µs
Integer Array Bubble Sort: Avg Time = 2531.90 µs
Character Array Insertion Sort: Avg Time = 603.89 µs
Integer Array Insertion Sort: Avg Time = 614.28 µs
Character Array Merge Sort: Avg Time = 595.22 µs
Integer Array Merge Sort: Avg Time = 743.88 µs
Integer Quick Sort (middle pivot): Avg Time = 60.09 µs
Character Quick Sort (middle pivot): Avg Time = 37.24 µs
Integer Quick Sort (third pivot): Avg Time = 46.82 µs
Character Quick Sort (third pivot): Avg Time = 62.25 µs

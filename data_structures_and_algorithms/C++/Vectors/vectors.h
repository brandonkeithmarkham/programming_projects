#ifndef VECTOR_APP_H
#define VECTOR_APP_H

#include <vector>

class VectorApp {
public:
    static constexpr int MIN = 1;
    static constexpr int MAX = 30;

    VectorApp();

    // Drive the original steps:
    void initializeVector(int size);  // fills with 0..8 randoms
    void printVector() const;
    void findDuplicates() const;      // prints 2-col table (value, count)
    void removeDuplicate();           // removes dupes in-place, prints array
    void printSortedVector() const;   // prints ascending-sorted copy

    int  size() const { return size_; }

private:
    std::vector<int> vect_;
    int size_{0};

    // helper used by removeDuplicate()
    void removeNumber(int idx);
};

#endif // VECTOR_APP_H

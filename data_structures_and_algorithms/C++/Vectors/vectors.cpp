#include "vectors.h"

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <algorithm> // std::swap

using std::cout;
using std::endl;

VectorApp::VectorApp() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));
}

// Populate with random integers in [0, 8]
void VectorApp::initializeVector(int size) {
    size_ = size;
    vect_.clear();
    vect_.reserve(size_);
    for (int i = 0; i < size_; ++i) {
        int randomNum = std::rand() % 9;   // 0..8 inclusive (as in your code)
        vect_.push_back(randomNum);
    }
}

void VectorApp::printVector() const {
    cout << "\nThe generated array is:\n\n";
    for (int i = 0; i < size_; ++i) {
        if (i < size_ - 1) cout << vect_[i] << ",";
        else               cout << vect_[i];
    }
    cout << endl;
}

// Prints a value/count table, sorting a WORKING COPY (does not mutate vect_)
void VectorApp::findDuplicates() const {
    std::vector<int> tmp = vect_; // copy so we don't alter original

    // Bubble-sort DESCENDING (matches your intent “largest to smallest”)
    bool didSwap;
    do {
        didSwap = false;
        // NOTE: safe bounds (0 .. size-2) to avoid out-of-range at i+1
        for (int i = 0; i < static_cast<int>(tmp.size()) - 1; ++i) {
            if (tmp[i] < tmp[i + 1]) {
                std::swap(tmp[i], tmp[i + 1]);
                didSwap = true;
            }
        }
    } while (didSwap);

    cout << "\nNumber      Count\n";

    // Count consecutive equal values in the DESC-sorted copy
    for (int i = 0; i < size_ - 1; ++i) {
        int count = 1;
        for (int j = i + 1; j < size_; ++j) {
            if (tmp[i] == tmp[j]) count++;
            else break;
        }
        if (count > 1) {
            cout << tmp[i] << std::setw(12) << count << endl;
            i += (count - 1);
        }
    }
}

// Shift-left from idx, shrink size, and resize vector
void VectorApp::removeNumber(int idx) {
    for (int i = idx; i < size_ - 1; ++i) {
        vect_[i] = vect_[i + 1];
    }
    --size_;
    vect_.resize(size_);
}

// Remove duplicates IN-PLACE (preserves first occurrence), print result
void VectorApp::removeDuplicate() {
    for (int i = 0; i < size_; ++i) {
        int number = vect_[i];
        for (int j = i + 1; j < size_; ++j) {
            if (number == vect_[j]) {
                removeNumber(j);
                --j; // re-check the shifted element at position j
            }
        }
    }

    cout << "\nArray after removing repeated elements:\n\n";
    for (int i = 0; i < size_; ++i) cout << vect_[i] << ' ';
    cout << endl;
}

// Print ascending-sorted COPY (original order in vect_ stays intact)
void VectorApp::printSortedVector() const {
    std::vector<int> tmp = vect_; // copy
    for (int i = 0; i <= size_ - 1; ++i) {
        for (int j = 0; j < size_ - 1; ++j) {
            if (tmp[j] > tmp[j + 1]) std::swap(tmp[j], tmp[j + 1]);
        }
    }

    cout << "\nSorted array: \n\n";
    for (int i = 0; i < size_; ++i) cout << tmp[i] << ' ';
    cout << endl << endl;
}


#include <iostream>
#include <limits>
#include "vectors.cpp"

int main() {
    int userChoice;                 // 1 = run, 9 = exit
    int size;                       // vector size
    VectorApp app;

    std::cout << "Welcome to My Vector APP\n\n"
              << "The purpose of this app is to :\n   A. generate random numbers "
              << "between 0 and 8 (exclusive) and stores them in\n"
              << "      the vector array.\n   B. Display the array.\n   C. "
              << "Display the an output in 2 column list. The first column is a"
              << " list of the\n      distinct array elements; the second column is the"
              << " count of the number of\n      occurrences of each element."
              << " The list should be sorted on entries in the\n"
              << "      first column, largest to smallest.\n   D. Remove the repeated "
              << "numbers from vector and display the array.\n"
              << "   E. Sort the vector array in an ascending order from lowest to highest "
              << "and display it.\n\n"
              << "Select one of the following:\n\n      1 - Generate the Array.\n"
              << "      9 - Exit the App.\n\nEnter your choice: ";

    std::cin >> userChoice;

    // menu validation
    while (!std::cin || (userChoice != 1 && userChoice != 9)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "\nError enter valid input.\n\n"
                  << "Select one of the following:\n\n      1 - Generate the Array.\n"
                  << "      9 - Exit the App.\n\nEnter your choice: ";
        std::cin >> userChoice;
    }

    while (userChoice == 1) {
        std::cout << "Enter the size of the array: ";
        std::cin  >> size;

        while (!std::cin || size > VectorApp::MAX || size < VectorApp::MIN) {
            std::cout << "\nError invalid input.\n\n";
            std::cout << "Enter the size of the array: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin >> size;
        }

        // Original sequence of operations
        app.initializeVector(size);
        app.printVector();
        app.findDuplicates();
        app.removeDuplicate();
        app.printSortedVector();

        std::cout << "Select one of the following:\n\n      1 - Generate the Array.\n"
                  << "      9 - Exit the App.\n\nEnter your choice: ";
        std::cin >> userChoice;

        while (!std::cin || (userChoice != 1 && userChoice != 9)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "\nError enter valid input.\n\n"
                      << "Select one of the following:\n\n      1 - Generate the Array.\n"
                      << "      9 - Exit the App.\n\nEnter your choice: ";
            std::cin >> userChoice;
        }
    }

    if (userChoice == 9) {
        std::cout << "\n\nThis program was implemented by Brandon Markham on September, 19th 2022\n";
    }
    return 0;
}


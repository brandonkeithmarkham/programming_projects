#include <iostream>
#include <limits>
#include "arrays.cpp"

int main() {
    char choice = 'Y';

    std::cout << "Welcome to my Array program. The function of the"
              << " program is to :\n\n\n"
              << "1. Create an 2 Arrays (Array_1,Array_2). Each Array is of size 3x3.\n"
              << "2. Populate both Arrays with distinct random numbers that are betweein 1 and 12.\n"
              << "   Display both Arrays.\n"
              << "3. Adding and multiplying Array_1 and Array_2.\n"
              << "4. Displaying the transposed and the determinate of Array_1.\n"
              << "5. Displaying the sum of elements of each row of Array_1, displaying the sum of \n"
              << "   elements of each column of Array_1, displaying the sum of both diagonal elemnents of \n"
              << "   Array_1.\n"
              << "6. Finally, determining whether or not Array_1 is special array.\n\n"
              << "7. Repeating the above steps until the user terminates the program.\n\n\n";

    while (choice == 'Y' || choice == 'y') {
        displayArrayFunctions();

        std::cout << "\nWould like to check another Array - Enter Y/y for yes or N/n for no\n\n";
        std::cin >> choice;

        while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
            std::cin.clear();
            std::cout << "Error enter valid input. Enter Y/y or N/n \n";
            std::cin >> choice;
        }
        if (choice == 'n' || choice == 'N') break;
    }

    std::cout << "\n\nThis program was implemented by Brandon Markham on September, 2nd 2022\n";
    return 0;
}

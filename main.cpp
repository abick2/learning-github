#include <iostream>

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1); // Logical error: missing base case for negative numbers
}

int main() {
    int number;

    std::cout << "Enter a number to calculate its factorial: ";
    std::cin >> number;

    // Bug: Incorrect condition to handle negative input
    if (number < 0) {
        std::cout << "Error: Factorial of a negative number is undefined.\n";
    } else {
        int result = factorial(number); // Bug: Debug this function for logical errors
        std::cout << "The factorial of " << number << " is " << result << "\n";
    }

    return 0;
}

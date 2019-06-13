#include <iostream>
#include <vector>
#include <iterator>

/// Function to tell if a number is odd
bool isOdd(const int &number)
{
    return number % 2 != 0;
}

/// Main function
int main(int argc, char * argv[]) {

    try {

        // There has to be an argument
        if (argc == 1) {
            throw std::runtime_error("No argument was provided. Please provide one argument");
        }

        // Convert the first argument into an integer
        const int number = std::stoi(argv[1]);

        // Tell whether the number is odd and print it
        std::string toDisplay = "false";
        if (isOdd(number)) {
            toDisplay = "true";
        }

        std::cout << toDisplay;

    }
    catch(const std::exception &err) {

        std::cerr << "Exception: " << err.what() << '\n';

        exit(EXIT_FAILURE);
    }

    exit(EXIT_SUCCESS);

}
#include <cassert>
#include <string>
#include <vector>
#include <iostream>

// Write a program that tells whether the input number is odd
// and fails if the first provided argument is not an integer
// or if no argument is provided

/// Function to tell if a number is odd
bool isOdd(const int &number)
{
    return number % 2 != 0;
}

/// Do the main function
int doMain(const std::vector<std::string>& args)
{

    const size_t argc = args.size();

    if (argc == 1u) {
        std::cout << "No argument was provided.\n";
        return 1;
    }
    else {

        std::cout << isOdd(std::stoi(args[1u])) << '\n';
        return 0;

    }
}

/// Main function
int main(int argc, char * argv[])
{

    const std::vector<std::string> args(argv, argv + argc);
    const std::string programName(args[0]);

    // Tests
    assert(doMain( { programName } ) == 1);
    assert(doMain( { programName, "1" } ) == 0);
    assert(doMain( { programName, "2" } ) == 0);
    assert(doMain( { programName, "nonsense" } ) == 1);
    assert(doMain( { programName, "12345678901234567890" } ) == 1);
    assert(doMain( { programName, "2", "1" } ) == 0);

    // Run the program
    return doMain(args);

}
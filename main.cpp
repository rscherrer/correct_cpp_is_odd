#include <vector>
#include <string>
#include <cassert>
#include <iostream>

/// Program to determine if a number is odd
int main(int argc, char * argv[])
{

    const std::vector<std::string> args(argv, argv + argc);

    assert(argc >= 1);

    if (argc == 1) return 1;

    try
    {
        const int number{std::stoi(args[1])};
        if (number % 2)
        {
            std::cout << "true\n";
        }
        else {
            std::cout << "false\n";
        }
    }
    catch (const std::exception&)
    {
        return 1;
    }

}
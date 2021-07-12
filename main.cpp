#include <iostream>
#include "command-line.hh"
#include "command-line-test.hh"

int main(int argc, char* argv[]){

    CommandLineTestSuite input_line (argc, argv, true);
    input_line.getAllArguments();
    int int_value = input_line.value<int>("-integer", 2);
    double double_value = input_line.value<double>("-number", 2.34);

    std::cout << int_value << std::endl;
    std::cout << double_value << std::endl;

    return 0;
}

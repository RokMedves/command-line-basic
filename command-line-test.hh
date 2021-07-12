#ifndef COMMAND_LINE_TEST_HH_INCLUDED
#define COMMAND_LINE_TEST_HH_INCLUDED

#include "command-line.hh"

// A class made to test the CommandLine interface
class CommandLineTestSuite : public CommandLine {

public:
    CommandLineTestSuite(int argc, char** argv, bool verbose = false):
        CommandLine (argc, argv), verbose_ {verbose}
        {
            if(verbose){std::cout << "Initialised with argc = " << argc_<< std::endl;}
        }

    void getAllArguments(){
        for(int i = 0; i < argc_; ++i){
            std::cout << argv_[i] << std::endl;
        }
    }

private:
    const bool verbose_;

};

#endif // COMMAND-LINE-TEST_HH_INCLUDED

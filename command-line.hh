#ifndef COMMAND_LINE_HH_INCLUDED
#define COMMAND_LINE_HH_INCLUDED

/*
Basically a copy of Gavin Salam's CmdLine program
Rok Medves, Oxford 03.07.2021

*/

#include <string>
#include <sstream>

class CommandLine {

public:

    CommandLine(int argc, char** argv):
        argc_ {argc}, argv_ {argv}
        {
        }

    template <class T>
    T value(std::string flag, T default_value) const{
        T output_value = default_value;

        for(int i = 0; i < argc_; ++i){
            if(argv_[i] == flag && i+1 < argc_){
                std::stringstream str(argv_[i+1]);
                str >> output_value;
                //output_value = boost::lexical_cast<T>();
            }
        }

        return output_value;
    }

    //write up an "is present" function too

private:
    /*
    What needs to be done:

    - Make a command line parser to be able to extract information
    - Make a templated class/function that gets you from string -> desired type
    - Allow the user to specify default values
    - Allow people to write up a help for each input line

    - get the command line
    - find all the flags which look like -something
    - get the following string past the -something

    */


protected:
    int argc_;
    char** argv_;

};

#endif // COMMAND_LINE_HH_INCLUDED

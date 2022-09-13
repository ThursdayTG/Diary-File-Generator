#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>

#include "../headers/currentDateTime.hpp"
#include "../headers/fileOperations.hpp"




int main()
{
    using std::cout, std::endl;


    std::string filename = currentDateTime() + " - new entry.md";

    cout << "ATTEMPTING TO GENERATE FILE ... ";
    std::ofstream outf{filename};


    // prevents calling other functions if any of these functions fail
    (void) (
        fileExists(filename)
     || fileInsertPlaceholder(filename)
     || fileContainsPlaceholder(filename)
    );


    cout
    << endl << "FSTREAMS CLOSED ."
    << endl << "EXITING. "
    << endl;
    return 0;
}

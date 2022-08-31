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


    if (
        fileExists(filename)
     || fileInsertPlaceholder(filename)
     || fileContainsPlaceholder(filename)
    )  {
        // Empty if-instruction serves to stop calling more functions if any of them fail.
    }


    cout
    << endl << "FSTREAMS CLOSED."
    << endl << "EXITING."
    << endl;
    return 0;
}

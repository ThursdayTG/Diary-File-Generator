#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>

#include "../headers/currentDateTime.hpp"
#include "../headers/fileOperations.hpp"




int main()
{
    std::string filename = currentDateTime() + " - new entry.md";

    std::cout << "ATTEMPTING TO GENERATE FILE ... ";
    std::ofstream outf{filename};


    if (
        fileExists(filename)
     || fileInsertPlaceholder(filename)
     || fileContainsPlaceholder(filename)
    )  {
        // serves to stop calling more functions if any of them fail
    }


    std::cout
    << std::endl << "FSTREAMS CLOSED."
    << std::endl << "EXITING.";
    return 0;
}

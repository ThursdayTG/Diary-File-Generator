#include <filesystem>
#include <fstream>
#include <iostream>

#include <chrono>




using std::cout, std::endl;
using std::string;

namespace fs = std::filesystem;




// Returns whether or not file exists in local directory.
// Will write to stdout for debugging purposes.

bool fileExists(string filename)
{
    if (fs::exists(filename))
    {
        cout << "SUCCESS. " << endl;

        return 0;
    }
    else
    {
        cout
        << endl
        << "COULD NOT GENERATE FILE. "
        << "MISSING PERMISSIONS? "
        << "SPECIAL CHARACTERS INVALID FOR FILESYSTEM? "
        << endl;

        return 1;
    }
}


// Attempts to insert a placeholder into the newly generated file.
// Will write to stdout for debugging purposes.

bool fileInsertPlaceholder(string filename)
{
    std::ofstream outf{filename};
    std::ifstream file{filename};

    if (file.is_open() == true)
    {
        cout
        << "\"" << filename << "\" OPENED. " << endl
        << "ATTEMPTING TO WRITE PLACEHOLDER CONTENT TO FILE ... ";

        outf
        << "Lorem ipsum dolor sit amet ...  " << "\n"
        << "<br />" << "\n"
        << "Lorem ipsum dolor sit amet ...  " << "\n";

        return 0;
    }
    else
    {
        cout
        << endl
        << "COULD NOT OPEN FILE. "
        << "MISSING PERMISSIONS? "
        << endl;

        return 1;
    }
}


// Checks whether generated file is empty to check whether
// the placeholder has been successfully written to the file.
// Will write to stdout for debugging purposes.

bool fileContainsPlaceholder(string filename)
{
    if (fs::is_empty(filename) == false)
    {
        cout << "SUCCESS." << endl;

        return 0;
    }
    else
    {
        cout
        << endl
        << "COULD NOT WRITE CONTENT TO FILE. "
        << "MISSING PERMISSIONS? "
        << endl;

        return 1;
    }
}

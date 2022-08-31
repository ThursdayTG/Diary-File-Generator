#include <filesystem>
#include <fstream>
#include <iostream>

#include <chrono>




bool fileExists(std::string filename)
{
    if (std::filesystem::exists(filename) == true)
    {
        std::cout << "SUCCESS." << std::endl;
        return 0;
    }
    else
    {
        std::cout << std::endl << "COULD NOT GENERATE FILE. MISSING PERMISSIONS? SPECIAL CHARACTERS INVALID FOR FILESYSTEM?" << std::endl;
        return 1;
    }
}


bool fileInsertPlaceholder(std::string filename)
{
    std::ofstream outf{filename};
    std::ifstream file{filename};

    if (file.is_open() == true)
    {
        std::cout
        << "\"" << filename << "\" OPENED." << std::endl
        << "ATTEMPTING TO WRITE PLACEHOLDER CONTENT TO FILE ... ";

        outf
        << "Lorem ipsum dolor sit amet ...  " << "\n"
        << "<br />" << "\n"
        << "Lorem ipsum dolor sit amet ...  " << "\n";
        return 0;
    }
    else
    {
        std::cout << std::endl << "COULD NOT OPEN FILE. MISSING PERMISSIONS?" << std::endl;
        return 1;
    }
}


bool fileContainsPlaceholder(std::string filename)
{
    if (std::filesystem::is_empty(filename) == false)
    {
        std::cout << "SUCCESS." << std::endl;
        return 0;
    }
    else
    {
        std::cout << std::endl << "COULD NOT WRITE CONTENT TO FILE. MISSING PERMISSIONS?" << std::endl;
        return 1;
    }
}

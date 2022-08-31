#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>

#include <chrono>
#include <fmt/core.h>
#include <fmt/chrono.h>




const std::string currentDateTime()
{
    namespace chrono = std::chrono;
    chrono::time_point<chrono::system_clock> now = chrono::system_clock::now();

    return fmt::format("{0:%Y}-{0:%m}-{0:%d} --- {0:%X}", now);
}


int main()
{
    using std::cout, std::endl;
    std::string filename = currentDateTime() + " - new entry.md";


    {
        namespace fs = std::filesystem;


        cout << "ATTEMPTING TO OPEN FSTREAMS AND GENERATE FILE ... ";
        std::ofstream outf{filename};
        std::ifstream file{filename};

        if (fs::exists(filename))
        {
            cout << "SUCCESS." << endl;
        }
        else
        {
            cout << "FILE COULD NOT BE GENERATED. MISSING PERMISSIONS? SPECIAL CHARACTERS INVALID FOR FILESYSTEM?" << endl;
        }


        if (file.is_open())
        {
            cout
            << "\"" << filename << "\" OPENED." << endl
            << "ATTEMPTING TO WRITE PLACEHOLDER CONTENT TO FILE ... ";

            outf
            << "Lorem ipsum dolor sit amet ...  " << "\n"
            << "<br />" << "\n"
            << "Lorem ipsum dolor sit amet ...  " << "\n";
        }
        else
        {
            cout << "COULD NOT OPEN FILE. MISSING PERMISSIONS?" << endl;
        }


        if (fs::is_empty(filename))
        {
            cout << "SUCCESS." << endl;
        }
        else
        {
            cout << "COULD NOT WRITE CONTENT TO FILE. MISSING PERMISSIONS?" << endl;
        }
    }
    cout << endl << "CLOSING FSTREAMS." << endl;


    cout << "EXITING." << endl;
    return 0;
}

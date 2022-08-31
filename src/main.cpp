#include <fstream>
#include <iostream>
#include <string>

#include <chrono>
#include <fmt/core.h>
#include <fmt/chrono.h>




const std::string currentDateTime()
{
    using namespace std::chrono;
    time_point<system_clock> now = system_clock::now();

    return fmt::format("{0:%Y}-{0:%m}-{0:%d} --- {0:%X}", now);
}


int main()
{
    using std::cout, std::endl;
    std::string filename = currentDateTime() + " - new entry.md";

    {
        std::ofstream outf{filename};

        cout << "OFSTREAM OPENED, FILE GENERATED." << endl;

        cout << "WRITING TO FILE." << endl;
        outf
        << "Lorem ipsum dolor sit amet ...  " << "\n"
        << "<br />" << "\n"
        << "Lorem ipsum dolor sit amet ...  " << "\n";
    }

    cout << "OFSTREAM CLOSED, CONTENT WRITTEN TO FILE \"" << filename << "\". EXITING." << endl;
    return 0;
}

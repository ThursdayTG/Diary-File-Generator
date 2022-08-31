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
    std::ofstream outf{ currentDateTime() + " - new entry.md" };

    outf
    << "Lorem ipsum dolor sit amet ...  " << "\n"
    << "<br />" << "\n"
    << "Lorem ipsum dolor sit amet ...  " << "\n";

    return 0;
}

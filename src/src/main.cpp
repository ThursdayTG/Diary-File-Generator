#include <fstream>
#include <iostream>
#include <string>

#include <chrono>
#include <fmt/core.h>




const std::string currentDateTime()
{
    using namespace std::chrono;
    time_point<system_clock> now = system_clock::now();

    return fmt::format("%Y-%m-%d --- %X", now);
//  return fmt::format("{%Y-%m-%d --- %X}", now);
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

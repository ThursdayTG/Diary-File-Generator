#include <fstream>
#include <iostream>
#include <string>

#include <chrono>
#include <format>




/*
const std::string currentDateTime()
{
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d --- %X", &tstruct);

    return buf;
}
*/




const std::string currentDateTime() {
    std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
    return std::format("{%Y-%m-%d.%X}", now);
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

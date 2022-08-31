#include <fstream>
#include <iostream>
#include <string>




const std::string currentDateTime()
{
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d --- %X", &tstruct);

    return buf;
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

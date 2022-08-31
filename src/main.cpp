#include <fstream>
#include <iostream>
#include <string>

#include "../headers/genericFunctions.hpp"




const std::string currentDateTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d --- %X", &tstruct);

    return buf;
}




int main()
{
    using std::cout, std::cin;


    bool   restartOperator = true;
    while (restartOperator)
    {
        restartOperator = false;
        printHeader();


        //===== start ======
        std::ofstream outf{ currentDateTime() + " - new entry.md" };


        //=== operations ===
        outf
        << "Lorem ipsum dolor sit amet ...  " << "\n"
        << "<br />" << "\n"
        << "Lorem ipsum dolor sit amet ...  " << "\n";


        //====== end =======
        restartOperator = queryRestart();
        clearScreen();
    }

    return 0;
}

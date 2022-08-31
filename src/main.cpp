#include <fstream>
#include <iostream>
#include <string>

#include "../headers/genericFunctions.hpp"




int main()
{
    using std::cout, std::cin;


    bool   restartOperator = true;
    while (restartOperator)
    {
        restartOperator = false;
        printHeader();


        //===== start ======
        std::ofstream outf{ "test.md" };


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

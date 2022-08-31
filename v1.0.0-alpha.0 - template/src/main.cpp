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
        //lorem_ipsum


        //=== operations ===
        //lorem_ipsum


        //====== end =======
        restartOperator = queryRestart();
        clearScreen();
    }

    return 0;
}

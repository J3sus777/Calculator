#include "Interface.h"

void CheckUP::checkUP(std::string example, float& result)
{
    exceptionSpace(example);
    if (exceptionDuplicateSymbols(example) == false || exceptionSymbol(example) == false ||
        exceptionVoidString(example) == false)
        std::cout << "Error\n";
    else
        searchBKT(example, result);
}

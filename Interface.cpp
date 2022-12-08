#include "Interface.h"

Interface::Interface()
{
    exc = new Exception();
    bkt = new SearchBKT();
}
Interface::~Interface()
{
    delete exc;
    delete bkt;
}
void Interface::checkUP(std::string& example, float& result)
{
    exc->exceptionSpace(example);
    if (exc->exceptionDuplicateSymbols(example) == false ||
        exc->exceptionSymbol(example) == false || exc->exceptionVoidString(example) == false)
        // example = "Error";  // for test
        std::cout << "Error\n";
    else
        bkt->searchBKT(example, result);
}

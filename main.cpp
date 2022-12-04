#include "Interface.h"
#include <iostream>

using namespace std;

int main()
{
    float result = 0;
    std::string example = "";
    CheckUP* ch = new CheckUP();

    std::cout << "Enter your mathimatical example: ";
    std::getline(std::cin, example);

    ch->checkUP(example, result);

    std::cout << "Result = " << result << std::endl;

    delete ch;
    return 0;
}

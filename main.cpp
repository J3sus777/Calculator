#include "Interface.h"
#include <iostream>

using namespace std;

int main()
{
    float result = 0;
    std::string example = "";
    Interface* interface = new Interface();

    std::cout << "Enter your mathimatical example: ";
    std::getline(std::cin, example);
    interface->checkUP(example, result);

    std::cout << "Result = " << result << std::endl;

    delete interface;
    return 0;
}

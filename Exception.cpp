#include "Exception.h"

std::string Exception::exceptionSpace(std::string& example)
{
    example.erase(std::remove_if(
                      example.begin(), example.end(),
                      std::bind(std::isspace<char>, std::placeholders::_1, std::locale::classic())),
                  example.end());
    return example;
}

bool Exception::exceptionVoidString(std::string& example)
{
    if (example.empty())
        return false;
    return true;
}

bool Exception::exceptionSymbol(std::string& example)
{
    size_t found = example.find_first_not_of("1234567890+-/*()");
    std::string symbols = "*/+-";
    for (size_t i = 0; i < example.size(); ++i) {
        for (char ch : symbols) {
            if (example[0] == ch)
                return false;
        }
        if (found != std::string::npos)
            return false;
        break;
    }
    return true;
}

bool Exception::exceptionDuplicateSymbols(std::string& example)
{
    std::string symbols = "*/+-";
    for (size_t i = 0; i < example.length(); ++i) {
        bool flag = false, flag2 = false;
        for (char ch : symbols) {
            if (example[i] == ch)
                flag = true;
        }
        if (flag && i < example.size() - 1) {
            for (char ch : symbols) {
                if (example[i + 1] == ch)
                    flag2 = true;
            }
        }
        if (flag && flag2) {
            return false;
        }
    }
    return true;
}

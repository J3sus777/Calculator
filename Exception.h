#ifndef EXCEPTION_H
#define EXCEPTION_H
#include <functional>
#include <locale>
#include <string>
class Exception {
public:
    std::string exceptionSpace(std::string& example);
    bool exceptionSymbol(std::string& example);
    bool exceptionVoidString(std::string& example);
    bool exceptionDuplicateSymbols(std::string& example);
};
#endif  // EXCEPTION_H

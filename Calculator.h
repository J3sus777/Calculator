#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <algorithm>
#include <regex>

class Calculator {
public:
    void calculator(std::vector<float>& num, std::vector<char>& bkt, char oper);
};
#endif  // CALCULATOR_H

#ifndef INTERFACE_H
#define INTERFACE_H
#include "Calculator.h"
#include "Exception.h"
#include "SearchBKT.h"
#include <iostream>

class CheckUP
    : public Calculator
    , public Exception
    , public SearchBKT {
public:
    void checkUP(std::string example, float& result);
};
#endif  // INTERFACE_H

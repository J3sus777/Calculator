#ifndef INTERFACE_H
#define INTERFACE_H
#include "Exception.h"
#include "SearchBKT.h"
#include <iostream>

class Interface {
public:
    Interface();
    ~Interface();
    void checkUP(std::string& example, float& result);

private:
    SearchBKT* bkt;
    Exception* exc;
};
#endif  // INTERFACE_H

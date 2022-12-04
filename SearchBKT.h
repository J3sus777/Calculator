#ifndef SEARCHBKT_H
#define SEARCHBKT_H
#include "Calculator.h"
class SearchBKT {
public:
    SearchBKT();
    ~SearchBKT();

public:
    int searchBKT(std::string example, float& result);

private:
    Calculator* calculator;
};

#endif  // SEARCHBKT_H

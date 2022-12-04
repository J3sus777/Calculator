#include "SearchBKT.h"

SearchBKT::SearchBKT() { calculator = new Calculator(); }
SearchBKT::~SearchBKT() { delete calculator; }
int SearchBKT::searchBKT(std::string example, float& result)
{
    if (example.find("(", 0) != std::string::npos) {
        int open = example.find("(", 0);
        int close = example.rfind(")", example.size());
        char tmp[10] = "";
        _itoa(searchBKT(example.substr(open + 1, close - (open + 1)), result), tmp, 10);
        example.erase(example.begin() + open, example.begin() + close + 1);
        example.insert(open, tmp);
    }

    std::vector<float> num;
    std::vector<char> bkt;

    std::regex num_regex("[0-9]+");
    for (std::sregex_token_iterator it(begin(example), end(example), num_regex), last; it != last;
         ++it) {
        num.push_back(std::stoi(it->str()));
    }

    std::regex arithmetic_regex("[\(\)\*\+\/-]");
    for (std::sregex_token_iterator it(begin(example), end(example), arithmetic_regex), last;
         it != last; ++it) {
        bkt.push_back(it->str()[0]);
    }

    calculator->calculator(num, bkt, '*');
    calculator->calculator(num, bkt, '/');
    calculator->calculator(num, bkt, '-');
    calculator->calculator(num, bkt, '+');

    for (auto it = num.begin(); it != num.end(); ++it) {
        result = *it;
    }

    return result;
}

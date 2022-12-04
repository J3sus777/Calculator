#include "Calculator.h"

void Calculator::calculator(std::vector<float>& num, std::vector<char>& bkt, char oper)
{
    while (std::find(bkt.begin(), bkt.end(), oper) !=
           bkt.end()) {
        size_t index = std::find(bkt.begin(), bkt.end(), oper) -
                       bkt.begin();
        switch (oper) {
        case '+':
            num[index] += num[index + 1];
            break;
        case '-':
            num[index] -= num[index + 1];
            break;
        case '*':
            num[index] *= num[index + 1];
            break;
        case '/':
            num[index] /= num[index + 1];
            break;
        }
        num.erase(num.begin() + (index + 1));
        bkt.erase(bkt.begin() + index);
    }
}

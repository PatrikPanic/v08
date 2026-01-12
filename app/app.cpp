#include "app.h"
#include <string>

namespace vsite::oop::v8
{
    int input_num(std::istream& in)
    {
        int n;
        in >> n;
        if (in.fail()) {
            throw not_number();
        }
        return n;
    }

    char input_op(std::istream& in)
    {
        char c;
        in >> c;
        std::string ops = "+-*/";
        for (size_t i = 0; i < ops.size(); ++i) {
            if (c == ops[i]) return c;
        }
        throw not_operator();
    }

    double calc(double x, char op, double y)
    {
        switch (op)
        {
        case '+': return x + y;
        case '-': return x - y;
        case '*': return x * y;
        case '/':
            if (y == 0) throw divide_zero();
            return x / y;
        default:
            throw not_operator();
        }
    }
}

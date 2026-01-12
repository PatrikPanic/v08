#include "app.h"
#include <iostream>

using namespace vsite::oop::v8;

int main()
{
    while (true)
    {
        try
        {
            double x = input_num(std::cin);
            char op = input_op(std::cin);
            double y = input_num(std::cin);

            double result = calc(x, op, y);
            std::cout << x << op << y << '=' << result << std::endl;
        }
        catch (const exception& e)
        {
            std::cout << e.desc();
            break;
        }
    }
}

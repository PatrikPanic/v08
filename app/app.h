#pragma once
#include <iostream>
#include <string>

namespace vsite::oop::v8
{
    int input_num(std::istream& in);
    char input_op(std::istream& in);
    double calc(double x, char op, double y);

    class exception {
    public:
        virtual std::string desc() const = 0;
        virtual ~exception() = default;
    };

    class not_number : public exception {
    public:
        std::string desc() const override { return "not a number"; }
    };

    class not_operator : public exception {
    public:
        std::string desc() const override { return "invalid operation"; }
    };

    class divide_zero : public exception {
    public:
        std::string desc() const override { return "divide by zero"; }
    };
}

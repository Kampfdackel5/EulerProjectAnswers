#include <iostream>
#include <string>

int main()
{
    for (int a{1}; a < 997; a++) {
        for (int b{1}; b < 997; b++) {
            for (int c{1}; c < 997; c++) {
                if ((a*a)+(b*b)==(c*c) && a < b && b < c) {
                    if (a+b+c==1000) {std::cout << "a=" << a << ", b=" << b << ", c=" << c << ", a*b*c=" << a*b*c << std::endl;}
                }
            }
        }
    }
}
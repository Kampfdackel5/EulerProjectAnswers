#include <iostream>

bool is_divisible(int number) {
    for (int i{1}; i<20; i++) {
        if (number % i != 0) {return false;}
    }
    return true;
}

int main()
{
    int number{2520};

    while(!is_divisible(number)) {
        number++;
    }
    std::cout << number << std::endl;
}
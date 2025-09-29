#include <iostream>
#include <cmath>

bool isPrime(int n) {
    for (int i{1}; i<static_cast<int>(sqrt(n)); i++) {
        if (n % i == 0) {return false;}
    }
    return true;
}

int main()
{
    int sumOfSquares{0};
    int sum {(100*101)/2};

    for (int i{1}; i<=100; i++) {
        sumOfSquares += i*i;
    }

    std::cout << sumOfSquares - (sum*sum) << std::endl;
}
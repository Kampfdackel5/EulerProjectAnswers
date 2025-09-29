#include <iostream>
#include <cmath>

bool isPrime(int n) {
    for (int i{2}; i<static_cast<int>(sqrt(n)+1); i++) {
        if (n % i == 0) {return false;}
    }
    return true;
}

int main()
{
    int n_prime {1};
    int n {1};

    while (n_prime < 10001) {
        n += 2;
        if (isPrime(n)) {
            n_prime++;
        }
    }
    std::cout << n << std::endl;
}